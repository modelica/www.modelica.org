/* dsblock.cpp

   Implementation of the classes of the DSblock interface to describe
   dynamic systems in a neutral form.

   Free software:
     The files of the DSblock interface (dsmodel.h, dsblock.h, dsblock.cpp)
     are free software and can be used without any restrictions.

   Disclaimer:
     The authors disclaim all warranties with regard to this
     software, including all implied warranties of merchantability
     and fitness. In no event shall the authors be liable for
     any special, indirect or consequential damages or any damages
     whatsoever resulting from loss of use, data or profits, whether
     in an action of contract, negligence or other tortious action,
     arising out of or in connection with the use or performance of
     this software.

   Author:
     Martin Otter
     DLR - Deutsches Zentrum fuer Luft- und Raumfahrt
     Institut fuer Robotik und System Dynamik
     Postfach 1116
     D-82230 Wessling
     Germany
     email: Martin.Otter@dlr.de

   Acknowledgement:
     Several details of the DSblock interface are based on ideas 
     of Hilding Elmqvist, Pieter Mosterman and Dag Brueck.

   Revisions:
     Apr 10, 1994: M. Otter
                   Version 3.3 implemented in Fortran .
     Jan 11, 1998: M.Otter
                   Version 4.0a Beta implemented in C++.
*/


#include <iostream.h>
#include <float.h>
#include <math.h>

#include "dsblock.h"

namespace dsblock {

static char* const EmptyString = "";


const char* const ClassTypeNames[] =
    {"class", "connector", "record", "package", "model", "block", "function",
     "Crossing", "Variable", "Real", "Boolean"};

const char* const VariabilityNames[] =
    {"timeVarying", "discrete", "constant", "parameter"};

const char* const InterfaceNames[] =
    {"protected", "output", "input"};

const char* const PropertyNames[] =
    {"Known", "ExpliciteAlgebraic", "ImpliciteAlgebraic",
     "ExpliciteDerivative", "ImpliciteDerivative",
     "State", "Residue", "New", "Alias", "NegativeAlias" };


ModelicaClass::ModelicaClass() {
  // Initialize a Modelica class
     Name        = EmptyString;
     Description = EmptyString;
     Next        = 0;
     Child       = 0;
     Father      = 0;
     Last        = 0;
     Variability = TimeVarying; 
     Interface   = Protected;   
     Enable      = True;
}


void ModelicaClass::enableAll (Bool e) {
  // Enable/disable sub-components and components on same level
     Enable = e;
     if ( Child ) Child->enableAll(e);
     if ( Next  ) Next->enableAll (e);
}



Real::Real() {
  // Initialize Modelica Real variable
     CType       = RealClass;
     _           = 0.0;
     Start       = 0.0;
     Min         = -infinity();
     Max         =  infinity();
     Quantity    = EmptyString;
     Unit        = EmptyString;
     DisplayUnit = EmptyString;
     Flow        = False;
     Property    = ExpliciteAlgebraic;
}


Real& Real::residue (Real& var) {
  // set property "residue(var)"
     Property = Residue;

     if ( var.Property == ExpliciteDerivative ) {
        var.Property = ImpliciteDerivative;
     } else if ( var.Property == ExpliciteAlgebraic ) {
        var.Property = ImpliciteAlgebraic;
     } else {
        ; // error
     }

     var.PropertyRef = this;
     return *this;
}



DynamicSystem::DynamicSystem() : model(newModel()) {
  // Initialize class DynamicSystem
     Demand         = ComputeAll;
     Time           = 0.0;
     NextTimeEvent  = Time - 1.0;
     zEpsLarge      = 1.e-10;
     zEpsSmall      = zEpsLarge / 1.e5;
     SampleAccuracy = 1.e-10;
     Event          = False;
	 Initial        = False;
  	 Terminal       = False;
	 IterationEvent = False;
     zDimChanged    = False;
     DimChanged     = False;
     EnableChanged  = False;
     MaxIteration   = 20;
     Debug          = False;
     PrintPriority  = 100;

     LenNameMax     = 0;
     LevelMax       = 0;
     tempBuffer     = 0;
}


void DynamicSystem::zSignUpdate(Crossing& z, double value) {
  /* Update sign of crossing function

     <> z    : Crossing variable
     -> value: New value of crossing variable
    
     z.Sign = -1  if                z < -zEpsSmall
            =  0  if  -zEpsSmall <= z <= zEpsSmall
            = +1  if   zEpsSmall <  z

     Log z-sign change, if PrintPriority >= PrintPriorityCrossing

     Revisions:
       May 14, 1993: H. Elmqvist
                     Implemented for Dymola (handleEvent).
       Jan  8, 1998: M. Otter
                     Adapted to DSblock.

  */
     double zEps  = zEpsLarge;
     int    zSign;

     zSign = Initial ? -2 : z.Sign;
     if ( fabs(value - zEps) <= (10.0*DBL_EPSILON) ) zEps = 0.9*zEps;

     if ( value >= -zEpsSmall &&  value <= zEpsSmall  &&  zSign != 0 ) {
        zSign = 0;
#ifndef DYMOSIM
        if ( !z.Interval ) zDimChanged = True;
        z.Interval = True;
#endif
        if ( !Terminal ) IterationEvent = True;
        if ( Debug && PrintPriority >= PrintPriorityCrossing ) {
           // Print debug output
              cout << "    Expression " << fullNamePtr(z) << " = " 
                   << z.Description << " became "
                   << value << ", i.e., == 0.\n";
        }

     } else if ( value > zEpsSmall  &&  zSign != 1 ) {
        zSign = +1;
#ifndef DYMOSIM
        if ( z.Interval ) zDimChanged = True;
        z.Interval = False;
#endif
        if ( !Terminal ) IterationEvent = True;
        if ( Debug && PrintPriority >= PrintPriorityCrossing ) {
           // Print debug output
              cout << "    Expression " << fullNamePtr(z) << " = " 
                   << z.Description << " became "
                   << value << ", i.e., > 0.\n";
        }

     } else if ( value < -zEpsSmall  &&  zSign != -1 ) {
        zSign = -1;
#ifndef DYMOSIM
        zEps  = -zEps;
        if ( z.Interval ) zDimChanged = True;
        z.Interval = False;
#endif
        if ( !Terminal ) IterationEvent = True;
        if ( Debug && PrintPriority >= PrintPriorityCrossing ) {
           // Print debug output
              cout << "    Expression " << fullNamePtr(z) << " = " 
                   << z.Description << " became "
                   << value << ", i.e., < 0.\n";
        }

     }
     z.Sign = zSign;
     z.Eps  = zEps;
}



Bool DynamicSystem::edge (Boolean& b) {
  /*
     Determine edge(b).
     <> b     : Boolean variable representing the condition in a 
                Modelica when statement
     <- return: = edge(b)

     If b.evaluate=True, the variable has been false previously,
     i.e., edge(b)=true, if b.value becomes true.

     Revisions:
       Feb 21, 1995: H. Elmqvist
                     Implemented for Dymola (when/endwhen macro).
       Jan  9, 1998: M. Otter
                     Adapted to DSblock.
  */
     if ( Initial ) b.evaluate = True;
     if ( b._ ) {
        if ( Event && b.evaluate ) {
           b.evaluate = False; 
           if ( Debug && PrintPriority >= PrintPriorityEdge) {
              cout << "    edge(" << b.name() << ")";
              if ( b.description() != EmptyString ) {
                 cout << " (= " << b.description() << ")";
              }
              cout << " became true.\n";
           }
           return True;
        }
     } else {
        b.evaluate = True;
     }
     return False;
}



Bool DynamicSystem::sample2(double start, double interval) {
  /*
     Sampler. Input values need not to be constant but can
     change during simulation.

     -> start   : First sampling instant.
     -> interval: Sampling interval (ignored if <= 0).
     <- return  : = true : Time instant is a sampling instant
                  = false: Time instant is no sampling instant

     This function determines if the current Time is a sampling instance
     for a sampler with first sampling instance at start and a period of 
     interval. It also determines the next sampling instance for this 
     sampler, NextTime, and the next sampling instance for all samplers,
     NextTimeEvent.

     The implementation calculates the IntervalFraction, i.e. a variable 
     that, when taking integer values, indicates that it is time for sampling.
     This is double precision, i.e. about 1E15 integers can be represented.
     However, an accuracy within each interval is also required in order 
     to handle multiple samplers with quite different sampling intervals.
     When a high frequency sampler generates time events, a low frequency
     sampler needs to determine if it should sample also. In fact, the same
     problem occurs for samplers with slightly offset sampling instances.
     It is essential that multi-rate samplers can be synchronized at common
     time instances. In order that limited accuracy calculations will not 
     prohibit this, a time window is introduced. It is 1E-6 of the sampling
     interval. 

     Revisions:
       Feb 21, 1995: H. Elmqvist
                     Implemented for Dymola (function sample).
       Jan 10, 1998: M. Otter
                     Adapted to DSblock.
*/
  double IntervalFraction, NextTime;
  Bool   samp;

  if (Time < start) {
    NextTime = start;
    samp     = False;

  } else if ( interval <= 0.0 ) {
    return False;

  } else {
    IntervalFraction = (Time-start)/interval;
    NextTime = start + (floor(IntervalFraction+SampleAccuracy)+1)*interval;
    samp = IntervalFraction - floor(IntervalFraction+SampleAccuracy) 
      <= 2*SampleAccuracy ? True : False;
            /* A symmetric time window is choosen because IntervalFraction 
               might be just below its supposed integer value. */
    }

  if ( NextTimeEvent > Time ) {
     if ( NextTimeEvent > NextTime ) NextTimeEvent = NextTime;
  } else {
     NextTimeEvent = NextTime;
  }

  return samp;
}


void DynamicSystem::logVariable(Variable& v) {
  // Print variable, if in debug mode
     if ( Debug && PrintPriority >= PrintPriorityLogVariable ) {
        cout << "    " << v.name() << " = ";
        if ( v.classType() == RealClass ) {
           Real& rv = (Real& ) v;
           cout << rv._;
        } else if ( v.classType() == BooleanClass ) {
           Boolean& bv = (Boolean& ) v;
           if ( bv._ ) cout << "true";
           else        cout << "false";
        }
        cout << '\n';
     }
}


const char* DynamicSystem::fullNamePtr(ModelicaClass& component) {
  // Provide (const) pointer to full name of component
  // (the name is stored in "this.tempBuffer")
     ModelicaClass* c = &component;
     const char*    name;
     int   iPosOld = LenNameMax;
     int   iPos;                    // new position
     int   lenName;                 // length of a name
     Bool  first = True;

  // Store component name as last part in the buffer
     tempBuffer[iPosOld] = '\0';
     do {
        // Determine name and length of name of component
           name    = c->Name;
           lenName = strlen(name);

        // Store name BEFORE the last stored name
           iPos = iPosOld - lenName;
           if ( iPos < 0 ) {iPos = iPosOld+1; break;}
           strcpy(&tempBuffer[iPos], name);

        // If not first call, replace '\0' with '.'.
           if ( first ) {
              first = False;
           } else {
              tempBuffer[iPosOld] = '.';
           }

        // Update pointers
           iPosOld = iPos-1;  if ( iPosOld < 0 ) break;
           c = c->Father;
     } while ( c != 0  &&  c != &model );

     return (&tempBuffer[iPos]);
} 


char* DynamicSystem::fullName(ModelicaClass& component) {
  // Provide full name of component as a new string
     const char* name = fullNamePtr(component);
     int   lstr = strlen(name);
     char* str  = new char[lstr+1];
     strcpy(str, name);
     return str;
}



FullDynamicSystem::FullDynamicSystem() {
  // Initialize dynamic system including model

  // Initialize dimensions

     NxMax     = 0;
     NxMax_i   = 0;
     NwMax     = 0;
     NwMax_i   = 0;
     Nx        = 0;
     Nx_i      = 0;
     Nw        = 0;
     Nw_i      = 0;
     Nu        = 0;
     Ny        = 0;
     Nz        = 0;
     Ncross    = 0;
     Nc_r      = 0;
     Nc_b      = 0;
     Np_r      = 0;
     Np_b      = 0;
     Ninit     = 0;
     Nnew_r    = 0;
     Nnew_b    = 0;
     Nb        = 0;
     Nalias    = 0;
     NnegAlias = 0;

  // Initialize element counters
     ix       = 0;
     ixDot_i  = 0;
     ixDot_e  = 0;
     iw_i     = 0;
     iresidue = 0;
     iu       = 0;
     iy       = 0;
     iz       = 0;
     inew_r   = 0;
     inew_b   = 0;
     
  // Traverse model and inquire dimension information
     initDim( *model.child(), LenNameMax, LevelMax, Protected, TimeVarying);

  // Set maximum length of full names
  // (if e.g. the longest name in model "circuit" is "R1.p.i",
  // the information should be: LenNameMax = 6, LevelMax = 3)
     LenNameMax = LenNameMax - 1;

  // Initialize name buffer
     nameBuffer.resize(LenNameMax, LevelMax);

  // Initialize string buffer for reverse name construction
     tempBuffer = new char[LenNameMax + 1];

  // Set actual dimensions
     Nx    = NxMax;
     Nx_i  = NxMax_i;
     Nw    = NwMax;
     Nw_i  = NwMax_i;
     Nz    = Ncross + Ncross;
     Npvec = NxMax + NxMax_i + nxMax_e() + NwMax_i + nresMax() + Nu + Ny
                   + nzMax();

  // Allocate storage for internal fields
     pvec = new doublePtr[Npvec];
     px       = pvec;
     pxDot_i  = px       + NxMax; 
     pxDot_e  = pxDot_i  + NxMax_i;
     pw_i     = pxDot_e  + nxMax_e();
     presidue = pw_i     + NwMax_i;
     pu       = presidue + nresMax();
     py       = pu       + Nu;
     pz       = py       + Ny;
     pnew_r   = new RealPtr    [Nnew_r];
     pnew_b   = new BooleanPtr [Nnew_b];
     cz       = new CrossingPtr[Ncross];

  // Traverse model and initialize internal fields and
  // copy start values into value fields.
     initVec( *model.child() );
}



void FullDynamicSystem::initDim(
                        ModelicaClass&  component, int& lenName, int& level,
                        InterfaceType   interface,
                        VariabilityType variability) {

  // Inquire dimension information from model
     int lenNameComp;
     int levelComp;

  // Initialize output arguments 
  // (+ 1, due to ".name").
     lenName = strlen(component.Name) + 1;
     level   = 1;

  // Modify Interface/Variability attribute according to
  // upper component
     if ( interface > component.Interface )
          component.Interface = interface;

     if ( variability > component.Variability )
          component.Variability = variability;

     if ( (component.Interface   >  Protected) &&   // Input or Output
          (component.Variability >= Constant )  )   // Parameter or Constant
          component.Interface = Protected;


  // Determine number of alias/negAlias variables
     if ( component.classType() >= VariableClass ) {
        Variable& vc = (Variable& ) component;
        if ( vc.Property == Alias ) {
           Nalias++;
        } else if ( vc.Property == NegativeAlias ) {
           NnegAlias++;
        }
     }


  // Determine dimensions
     if ( component.classType() == RealClass ) {
        Real& rc = (Real& ) component;

        if ( rc.Variability == Parameter ) {
           rc.Property = Known;
           Np_r++;
        } else if ( rc.Variability == Constant ) {
           rc.Property = Known;
           Nc_r++;
        } else if ( rc.Interface == Input ) {
           rc.Property = Known;
           Nu++;
        } else {
           switch ( rc.Property ) {
             case ExpliciteAlgebraic : NwMax++    ; break;
             case ImpliciteAlgebraic : NwMax_i++  ; break;
             case ImpliciteDerivative: NxMax_i++  ; break;
             case State              : NxMax++    ; break;
             case New                : Nnew_r++;
                                       if ( rc.Variability == TimeVarying )
                                          Ninit++;
                                       break;
           }
        }
        if ( rc.Interface == Output ) Ny++;

     } else if ( component.classType() == BooleanClass ) {
        Boolean& bc = (Boolean& ) component;

        if ( bc.Variability == Parameter ) {
           bc.Property = Known;
           Np_b++;
        } else if ( bc.Variability == Constant ) {
           bc.Property = Known;
           Nc_b++;
        } else if ( bc.Property == New ) {
           Nnew_b++;
           bc.Start = bc.propertyRef().Start;
        } else if ( bc.Property == DiscreteState ) {
           Nb++;
        }

     } else if ( component.classType() == CrossingClass ) {
        Crossing& zc = (Crossing& ) component;

        Ncross++;
        zc.sys = (DynamicSystem* ) this;
     }


  // Traverse sub-components (childs)
     if ( component.Child != 0 ) {
        initDim(*component.Child, lenNameComp, levelComp,
                component.Interface, component.Variability);
        lenName += lenNameComp;
        level   += levelComp;
     }

  // Traverse next components
     if ( component.Next != 0 ) {
        initDim(*component.Next, lenNameComp, levelComp, interface, variability);
        if ( lenName < lenNameComp ) lenName = lenNameComp;
        if ( level   < levelComp   ) level   = levelComp;
     }
}


void FullDynamicSystem::initVec(ModelicaClass& component) {
  // Initialize internal DAE fields and copy start values into value field
 
  // Action according to type of class
     if ( component.classType() == RealClass ) {
        Real& rc = (Real& ) component;

        switch ( rc.Property ) {
          case State              : px      [ix]      =&rc._; ++ix      ; break;
          case ImpliciteDerivative: pxDot_i [ixDot_i] =&rc._; ++ixDot_i ; break;
          case ExpliciteDerivative: pxDot_e [ixDot_e] =&rc._; ++ixDot_e ; break;
          case ImpliciteAlgebraic : pw_i    [iw_i]    =&rc._; ++iw_i    ; break;
          case Residue            : presidue[iresidue]=&rc._; ++iresidue; break;
          case New                : pnew_r  [inew_r]  =&rc  ; ++inew_r  ; break;
          case Known              : if ( rc.Interface == Input ) {
                                       pu[iu]=&rc._; ++iu;
                                    }
                                    break;
        }

        if ( rc.Interface == Output ) {
           py[iy]=&rc._; ++iy;
        }

        // Copy start value into value field
           rc._ = rc.Start;

     } else if ( component.classType() == BooleanClass ) {
        Boolean& bc = (Boolean& ) component;

        if ( bc.Property == New ) {
           pnew_b[inew_b] = &bc;
           inew_b++;
        }

        // Copy start value into value field
           bc._ = bc.Start;

     } else if ( component.classType() == CrossingClass ) {
        Crossing& zc = (Crossing& ) component;
 
        cz[iz]     = &zc;
        pz[2*iz]   = &zc.zPos;
        pz[2*iz+1] = &zc.zNeg;
        ++iz;  
     }


  // Traverse sub-components (childs)
     if ( component.Child != 0 ) initVec(*component.Child);

  // Traverse next components
     if ( component.Next != 0 ) initVec(*component.Next);
}


void FullDynamicSystem::printModelDimensions() {
  // Print dimensions of model
     cout << "\n"
          << "  LenNameMax = " << LenNameMax << " \"maximum length of full names\"\n"
          << "  LevelMax   = " << LevelMax   << " \"maximum number of component levels\"\n\n"
          << "  nxMax      = " << NxMax      << " \"total number of states\"\n"
          << "  nxMax_i    = " << NxMax_i    << " \"number of implicite states\"\n"
          << "  nwMax      = " << NwMax      << " \"total number of algebraic variables\"\n"
          << "  nwMax_i    = " << NwMax_i    << " \"number of implicite algebraic variables\"\n"
          << "  nzMax      = " << nzMax()    << " \"maximum number of crossing functions\"\n"
          << "  nu         = " << Nu         << " \"number of inputs\"\n"
          << "  ny         = " << Ny         << " \"number of outputs\"\n"
          << "  nc_r       = " << Nc_r       << " \"number of Real    constants\"\n"
          << "  nc_b       = " << Nc_b       << " \"number of Boolean constants\"\n"
          << "  np_r       = " << Np_r       << " \"number of Real    parameters\"\n"
          << "  np_b       = " << Np_b       << " \"number of Boolean parameters\"\n"
          << "  nnew_r     = " << Nnew_r     << " \"number of Real    New variables\"\n"
          << "  nnew_b     = " << Nnew_b     << " \"number of Boolean New variables\"\n"
          << "  nAlias     = " << Nalias     << " \"number of alias variables\"\n"
          << "  nNegAlias  = " << NnegAlias  << " \"number of negative alias variables\"\n";
}


void FullDynamicSystem::printPtrVector(doublePtr* vec, int nvec,
                                       const char* vecName,
                                       const char* vecDesc ) {
  // Print variable names of pointer vector
     cout << "  " << vecName << '[' << nvec << "] ";

     if ( nvec > 0 ) cout << "= ";
     cout << "// " << vecDesc << '\n';

     for (int i=0; i<nvec; i++) {
       cout << "    " << *vec[i] << "\n";
     }

     cout << '\n';
}


void FullDynamicSystem::printModelInterface() {
  // Print interface variables of model
     cout << "\n";
     printPtrVector(px      , NxMax    , "x"      , "state variables");
     printPtrVector(pxDot_e , nxMax_e(), "xDot_e" , "explicite state derivatives");
     printPtrVector(pxDot_i , NxMax_i  , "xDot_i" , "implicite state derivatives");
     printPtrVector(pw_i    , NwMax_i  , "w_i"    , "implicite algebraic variables");
     printPtrVector(presidue, nresMax(), "residue", "residue variables");
     printPtrVector(pu      , Nu       , "u"      , "input variables");
     printPtrVector(py      , Ny       , "y"      , "output variables");
     printPtrVector(pz      , Nz       , "z"      , "crossing variables");
}


void FullDynamicSystem::printModel() {
  // Print model
     const char* descr = model.Description;
     ClassType   type  = model.classType();

  // Print heading
     cout << '\n' << model.classTypeName() << ' ' << model.Name;
     if ( descr[0] != '\0' ) {     
        cout << " \"" << descr << "\"";
     }
     cout << '\n';
 
  // Print components of model
     nameBuffer.clear();
     printModel(*model.child());
}


void FullDynamicSystem::printModel(ModelicaClass& component) {
  // Print complete component
     static const int lenLimit = 30;
     int nBlanks, lenName, iPos;

  // Store instance name in buffer
     nameBuffer.push(component.Name);

  // Print variable instance name and blanks
     if ( component.classType() > VariableClass  ||
          component.classType() == CrossingClass ) {
        // Print full instance name
           cout << "  " << nameBuffer.fullNamePtr();
           lenName = nameBuffer.lenFullName();
           iPos    = 2 + lenName;

        // Print appropriate number of blanks
           if ( iPos >= lenLimit-2 ) {
              nBlanks = 0;
              iPos    = lenLimit;
           } else if ( LenNameMax >= lenLimit-2 ) {
              nBlanks = lenLimit-2 - lenName;
              iPos    = lenLimit;
           } else {
              nBlanks = LenNameMax - lenName;
              iPos    = iPos + nBlanks + 2;
           }
           printBlanks(nBlanks); 
           cout << ": ";
     }
   

  // Print flow attribute if present
     if ( component.classType() == RealClass ) {
           Real& rc = (Real& ) component;

           if ( rc.Flow ) {
              cout << "flow ";
           }
     }


  // Print variable attributes
     if ( component.classType() > VariableClass ) {
        // Print input/output, if present
           if ( component.Interface != Protected ) {
              cout << component.interfaceName() << ' ';
           }

        // Print parameter/constant, if present
           if ( component.Variability != TimeVarying ) {
              cout << component.variabilityName() << ' ';
           }

        // Print type name
           cout << component.classTypeName() << '(';

        // Print specific type attributes
           if ( component.classType() == RealClass ) {
              // Print Real type attributes
                 Real& rc   = (Real& ) component;
                 Bool first = True;

                 if ( rc.Start != 0.0 ) {
                    if ( first ) first = False; else cout << ", ";
                    cout << "start=" << rc.Start;
                 }

                 if ( rc.Min != -rc.infinity() ) {
                    if ( first ) first = False; else cout << ", ";
                    cout << "min=" << rc.Min;
                 }

                 if ( rc.Max != rc.infinity() ) {
                    if ( first ) first = False; else cout << ", ";
                    cout << "max=" << rc.Max;
                 }
            
                 if ( rc.Quantity != EmptyString ) {
                    if ( first ) first = False; else cout << ", ";
                    cout << "quantity=\"" << rc.Quantity << '\"';
                 }

                 if ( rc.Unit != EmptyString ) {
                    if ( first ) first = False; else cout << ", ";
                    cout << "unit=\"" << rc.Unit << '\"';
                 }

                 if ( rc.DisplayUnit != EmptyString ) {
                    if ( first ) first = False; else cout << ", ";
                    cout << "displayUnit=\"" << rc.DisplayUnit << '\"';
                 }

           } else if ( component.classType() == BooleanClass ) {
              // Print Boolean type attributes
                 Boolean& bc = (Boolean& ) component;

                 if ( bc.Start ) {
                    cout << "start=";
                    if ( bc.Start ) cout << "true";
                    else            cout << "false";
                 }
           }

        // Print ")\n"
           cout << ")\n";
 
        // Print property
           Variable& vc = (Variable& ) component;

           if ( vc.Property != Known ) {
              printBlanks(iPos);
              cout << "property=" << vc.propertyName();
              if ( vc.PropertyRef != 0 ) {
                 cout << ", propertyRef=" << fullNamePtr(vc.propertyRef());
              }
              cout << '\n';
           }

     } else if ( component.classType() == CrossingClass ) {
        // Print Crossing variable attributes
           Crossing& zc = (Crossing& ) component;
    
           cout << '\"' << zc.Description << "\" (crossing variable)\n";
     }


  // Print sub-component definition, if present
     if ( component.Child != 0 ) 
        printModel(*component.Child);

  // Remove instance name from buffer and print next component
     nameBuffer.pop();
     if ( component.Next != 0 ) 
        printModel(*component.Next);
}


void FullDynamicSystem::printBlanks(int nBlanks) {
  // Print nBlanks blanks to cout.
     for (int i=0; i<nBlanks; i++) cout << ' ';
}



void FullDynamicSystem::outputs (double* y) {
  // Compute outputs
     doublePtr* p = py;
     int i;

     Demand = ComputeOutputs;
     model.equation( (DynamicSystem& ) *this );
     for (i=0; i<Ny; i++) {*y++ = **p++;}
}


 
void FullDynamicSystem::crossings (double* z) {
  // Compute outputs
     doublePtr* p = pz;
     int i;

     Demand = ComputeCrossings;
     model.equation( (DynamicSystem& ) *this );
     for (i=0; i<Nz; i++) {*z++ = **p++;}
}



void FullDynamicSystem::performInitial () {
  // Perform initial event, i.e., evaluate model at initial time.
  // This function assumes that all input data has already
  // been copied into the model via function "setArg".  
     int i;

  // Initialize variables
     Initial       = True;
     StartTime     = Time;
     NextTimeEvent = Time - 1.0;

  // Initialize "new(b)" variables, if "b" is boolean
     for (i=0; i<Nnew_b; i++) {
        Boolean& new_b = *pnew_b[i];
        Boolean& b     = new_b.propertyRef();

        new_b._ = b._;
     }

  // Print debug information if desired 
     if (Debug && PrintPriority >= PrintPriorityEvent ) {
        cout << "\n... The initial event occurred at time = " 
             << Time << " [s].\n";
     }

  // Perform actions of an event instant
     performEvent();
}


void FullDynamicSystem::performTerminal () {
  // Perform terminal event, i.e., evaluate model at terminal time.
  // This function assumes that all input data has already
  // been copied into the model via function "setArg".  
  
  // Initialize variables
     Terminal = True;

  // Print debug information if desired 
     if (Debug && PrintPriority >= PrintPriorityEvent) {
        cout << "\n... The terminal event occurred at time = " 
             << Time << " [s].\n";
     }

  // Perform actions of an event instant
     performEvent();

  // Print debug information
     if ( Debug && PrintPriority > 0 ) cout << '\n';

     Terminal = False;
}


void FullDynamicSystem::performEvent () {
  /*
     Perform event, i.e., evaluate model at an event instant. 
     This function assumes that all input data has already 
     been copied into the model via function "setArg".
     The function returns "True", if dimensions of arguments
     have been changed. These dimensions can be inquired via the
     access functions of class "FullDynamicSystem" and its subclasses.
     In any way, the actual values of the arguments can be inquired 
     via function "getArg".
  */
     int iter, i; 

  // Initialize variables
     zDimChanged   = False;
     DimChanged    = False;
     EnableChanged = False;
     Event         = True;

  // Initialize "new(v)" variables, if "v" is Real
     for (i=0; i<Nnew_r; i++) {
        Real& new_r = *pnew_r[i];
        Real& r     = new_r.propertyRef();

        new_r._ = r._;
     }

  // Print debug information if desired 
     if ( Debug && PrintPriority >= PrintPriorityEvent
                && !Initial && !Terminal ) {
        cout << "\n... An event occurred at time = " << Time << " [s].\n";
     }

  // Event iteration (primary loop; secondary loop has still to be realized)
     iter = 0;
     do {
        // Initialize iteration
           iter++;
           IterationEvent = False;

        // Check on maximum number of iterations
           if ( iter > MaxIteration ) {
              // throw new Exception
              // (   "... Finding consistent restart conditions failed at time = " + time +
              // "\n     after " + maxIter + " iterations have been performed.");
           }
       
        // Print debug information if desired
           if ( Debug && iter > 1 && PrintPriority >= PrintPriorityIteration )
              cout << "  Iterating to find consistent restart conditions.\n";

        // Evaluate model
           model.computeLabel = 0;
           Demand = ComputeAll;
           model.equation(*this);
           Initial = False;

        // Perform v = new(v), if v is a Real variable
           for (i=0; i<Nnew_r; i++) {
              Real& new_r = *pnew_r[i];
              Real& r     = new_r.propertyRef();
              if ( r._ != new_r._ ) {
                 // Print debug output
                    if ( Debug && PrintPriority >= PrintPriorityBoolean ) {
                       cout << "    Variable " << r.name() << " changed from "
                            << r._ << " to " << new_r._ << ".\n";
                    }

                 // Assign new value
                    r._ = new_r._;
              }
           }

        // Check whether a discrete variable changed its value.
           for (i=0; i<Nnew_b; i++) {
              Boolean& new_b = *pnew_b[i];
              Boolean& b     = new_b.propertyRef();
              if ( b._ != new_b._ ) {
                 IterationEvent = True;
                 b._ = new_b._;

                 // Print debug output
                    if ( Debug && PrintPriority >= PrintPriorityBoolean ) {
                       cout << "    Variable " << b.name() << " changed to ";
                       if ( b._ ) {
                          cout << "true.\n";
                       } else {
                          cout << "false.\n";
                       }
                    }
              }
           }
     } while ( IterationEvent && !Terminal );

  // Modify crossing vector, if number of crossing functions changed
     if ( zDimChanged ) {
        iz = 0;
        for (int i=0; i<Ncross; i++) {
           pz[iz] = &cz[i]->zPos;
           iz++;
           if ( cz[i]->Interval ) {
              pz[iz] = &cz[i]->zNeg;
              iz++;
           }
        }
        if ( iz != Nz ) DimChanged = True;
        Nz = iz;
     }

     Event = False;
}



void HybridDAE::setArg (double* x, double* xDot_i, double* w_i, double* u,
                        double  time) {
  // Copy arguments into model
     doublePtr* p;
     int i;

     p=px     ; for (i=0; i<Nx  ; i++) { **p++ = *x++; }
     p=pxDot_i; for (i=0; i<Nx_i; i++) { **p++ = *xDot_i++; }
     p=pw_i   ; for (i=0; i<Nw_i; i++) { **p++ = *w_i++; }
     p=pu     ; for (i=0; i<Nu  ; i++) { **p++ = *u++; }
     
     Time = time;
     resetComputeLabel();
}


void HybridDAE::getArg (double* x, double* xDot_i, double* w_i) {
  // Get arguments
     doublePtr* p;
     int i;

     p=px     ; for (i=0; i<Nx  ; i++) {*x        = **p++;}
     p=pxDot_i; for (i=0; i<Nx_i; i++) {*xDot_i++ = **p++;}
     p=pw_i   ; for (i=0; i<Nw_i; i++) {*w_i++    = **p++;}
}


void HybridDAE::derivatives (double* residue, double* xDot_e) {
  // Compute residues and explicit derivatives
     doublePtr* p;
     int i;

     Demand = ComputeDerivatives;
     model.equation( (DynamicSystem& ) *this );

     p=pxDot_e ; for (i=0; i<nx_e(); i++) {*xDot_e++  = **p++;}
     p=presidue; for (i=0; i<nres(); i++) {*residue++ = **p++;}
}



void HybridODE::setArg (double* x, double* u, double time) {
  // Copy arguments into model
     doublePtr* p;
     int i;

     p=px; for (i=0; i<Nx; i++) { **p++ = *x++; }
     p=pu; for (i=0; i<Nu; i++) { **p++ = *u++; }
     
     Time = time;
     resetComputeLabel();
}


void HybridODE::getArg (double* x) {
  // Get arguments
     doublePtr* p = px;
     int i;

     for (i=0; i<Nx; i++) {*x++ = **p++;}
}


void HybridODE::derivatives (double* xDot) {
  // Compute derivatives
     doublePtr* p = pxDot_e;
     int i;

     Demand = ComputeDerivatives;
     model.equation( (DynamicSystem& ) *this );
     for (i=0; i<Nx; i++) {*xDot++ = **p++;}
}


NameBuffer::NameBuffer() {
  // Initialize class
     dimBuffer = 0;
     dimIndex  = 0;
     buffer    = 0;
     index     = 0;
     clear();
}


NameBuffer::NameBuffer(int lenNameMax, int levelMax) {
  // Initialize class
     NameBuffer();
     resize(lenNameMax, levelMax);
}


void NameBuffer::resize (int lenNameMax, int levelMax) {
  // Resize buffer
     if ( lenNameMax <= 0  ||  levelMax <= 0 ) return;

     if ( dimBuffer > 0 ) delete buffer;
     if ( dimIndex  > 0 ) delete index;
 
     dimBuffer = lenNameMax + 1;
     dimIndex  = levelMax + 1;
     buffer    = new char[dimBuffer];
     index     = new int [dimIndex];

     clear();
}



void NameBuffer::clear() {
  // Clear buffer
     iPos = 0; 
     if ( dimIndex > 0 && dimBuffer > 0 ) {
        index[iPos] = 0;
        buffer[ index[iPos] ] = '\0';
     }
}


void NameBuffer::pop() {
  // Remove last name from buffer
     --iPos;
     if ( iPos < 0 ) iPos = 0;
     buffer[ index[iPos] ] = '\0';
}


void NameBuffer::push(const char* name) {
  // Store name in buffer
     int lenName = strlen(name);
     int iLast   = index[iPos];
  
     if ( dimIndex  <= iPos+1  ||  
          dimBuffer <= (iLast + lenName + (iLast > 0 ? 1 : 0)) ) return;

     if ( iLast > 0 ) {
        buffer[iLast] = '.';
        ++iLast;
     }
     strcpy( &buffer[iLast], name );
     ++iPos;
     index[iPos] = iLast + lenName;
}


char* NameBuffer::fullName() {
  /* Copy name from namebuffer into newly allocated string */
     int   lstr = lenFullName();
     char* str  = new char[lstr+1];
     strcpy(str, fullNamePtr());
     return str;
}


}
