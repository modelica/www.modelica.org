/* dsblock.h

   Header-file of classes to access dynamic system models by integrators
   in form of hybrid ODEs (= Ordinary Differential Equations in state space
   form) or hybrid DAEs (= Differential Algebraic Equations).
   This file is part of the DSblock interface.

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


#ifndef DSBLOCK_H
#define DSBLOCK_H

#include <float.h>
#include <string.h>
#include "dsmodel.h"


namespace dsblock {

typedef double*   doublePtr;
typedef Real*     RealPtr;
typedef Boolean*  BooleanPtr;
typedef Crossing* CrossingPtr;


class FullDynamicSystem : public DynamicSystem {
  public:
    FullDynamicSystem();

    // Mathematical functions common to all dynamic systems.
    // Before calling these functions, function "setArg"
    // defined in subclasses has to be called.
       void outputs        (double y[]);  // inquire output variables
       void crossings      (double z[]);  // inquire crossing variables
       void performInitial ();            // perform initial event
       void performEvent   ();            // perform event
       void performTerminal();            // perform terminal event

    // Other inquiry function
       double nextTimeEvent() {return NextTimeEvent;}
       Model& getModel     () {return model;}

    // Functions to inquire model dimensions
    // (more functions are provided in sub-classes)
       Bool dimChanged() const {return DimChanged;}    // true, if number of dimensions 
                                                       // changed at event instant
       int  nu        () const {return Nu;}            // number of Real Input variables
       int  ny        () const {return Ny;}            // number of Real Output variables
       int  nz        () const {return Nz;}            // number of crossing variables
       int  nzMax     () const {return Ncross+Ncross;} // maximum number of crossing variables
       int  nb        () const {return Nb;}            // number of boolean variables
       int  nbnew     () const {return Nnew_b;}        // number of boolean new variables
       int  nc_r      () const {return Nc_r;}          // number of Real    constants
       int  nc_b      () const {return Nc_b;}          // number of Boolean constants
       int  np_r      () const {return Np_r;}          // number of Real    parameters
       int  np_b      () const {return Np_b;}          // number of Boolean parameters
       int  nAlias    () const {return Nalias;}
       int  nNegAlias () const {return NnegAlias;}
       int  lenNameMax() const {return LenNameMax;} // maximum length of full variable names as string
       int  levelMax  () const {return LenNameMax;} // maximum number of component levels

    // Functions to print model information
       void printModel();
       void printModelDimensions();
       void printModelInterface();  // only for test purposes

    // Operations on name buffer of model
       void        push       (const char* name){nameBuffer.push(name);}
       void        pop        ()                {nameBuffer.pop();}
       void        clearBuffer()                {nameBuffer.clear();}
       int         lenFullName()                {return nameBuffer.lenFullName();}
       const char* fullNamePtr()                {return nameBuffer.fullNamePtr();}
       char*       fullName   ()                {return nameBuffer.fullName();}
       const char* fullNamePtr(ModelicaClass& c){return DynamicSystem::fullNamePtr(c);}
       char*       fullName   (ModelicaClass& c){return DynamicSystem::fullName   (c);}

  protected:
    // Dimensions
       int Npvec;
       int NxMax, NxMax_i, NwMax, NwMax_i;
       int Nx   , Nx_i   , Nw   , Nw_i   , Nu, Ny, Nz;
       int Ncross;     // number of declared Crossing variables
       int Ninit;      // number of real    new variables which are TimeVarying
       int Nnew_r;     // number of real    new variables
       int Nnew_b;     // number of boolean new variables
       int Nb;         // number of boolean variables
       int Nc_r;       // number of real    constants
       int Nc_b;       // number of boolean constants
       int Np_r;       // number of real    parameters
       int Np_b;       // number of boolean parameters
       int Nalias;     // number of alias variables
       int NnegAlias;  // number of negative alias variables

    // Pointer vectors for fast copying
       doublePtr*   pvec;  // storage in which all vectors are contained
       doublePtr*   px;
       doublePtr*   pxDot_e;
       doublePtr*   pxDot_i;
       doublePtr*   pw_i;
       doublePtr*   presidue;
       doublePtr*   pu;
       doublePtr*   py;
       doublePtr*   pz;
       RealPtr*     pnew_r;  // pointer to values of "new" real variables
       BooleanPtr*  pnew_b;  // pointer to "new" boolean variables
       CrossingPtr* cz;      // pointer to Crossing variables

    // Element counters into pointer vectors
       int ix;
       int ixDot_i;
       int ixDot_e;
       int iw_i;
       int iresidue;
       int iu;
       int iy;
       int iz;
       int inew_r;
       int inew_b;

    // Functions
       int  nxMax_e () const {return (NxMax - NxMax_i);}
       int  nwMax_e () const {return (NwMax - NwMax_i);}
       int  nresMax () const {return (NxMax_i + NwMax_i);}
       int  nx_e    () const {return (Nx - Nx_i);}
       int  nw_e    () const {return (Nw - Nw_i);}
       int  nres    () const {return (Nx_i + Nw_i);}

       void initDim          (ModelicaClass& model, int& lenName, int& level,
                              InterfaceType interface, VariabilityType variability);
       void initVec          (ModelicaClass& model);
       Bool dimChanged       ();
       void printModel       (ModelicaClass& model);
       void printPtrVector   (doublePtr* vec, int nvec, const char* vecName,
                              const char* vecDesc );
       void printBlanks      (int nBlanks);
       void resetComputeLabel() {model.computeLabel = 0;}
};



class HybridODE : public FullDynamicSystem {
  public:
    void setArg     (double x   [], double u[], double time);
    void getArg     (double x   []);
    void derivatives(double xDot[]);

    int  nxMax() const {return NxMax;}
    int  nx   () const {return Nx;}
};



class HybridDAE : public FullDynamicSystem {
  public:
    void setArg     (double x      [],double xDot_i[],double w_i[],double u[],
                     double time);
    void getArg     (double x      [],double xDot_i[],double w_i[]);
    void derivatives(double residue[],double xDot_e[]);

    int  nxMax   () const {return NxMax;}
    int  nxMax_i () const {return NxMax_i;}
    int  nxMax_e () const {return FullDynamicSystem::nxMax_e();}
    int  nwMax   () const {return NwMax;}
    int  nwMax_i () const {return NwMax_i;}
    int  nwMax_e () const {return FullDynamicSystem::nwMax_e();}
    int  nresMax () const {return FullDynamicSystem::nresMax();}
    int  nx      () const {return Nx;}
    int  nx_i    () const {return Nx_i;}
    int  nx_e    () const {return FullDynamicSystem::nx_e();}
    int  nw      () const {return Nw;}
    int  nw_i    () const {return Nw_i;}
    int  nw_e    () const {return FullDynamicSystem::nw_e();}
    int  nres    () const {return FullDynamicSystem::nres();}
};



}  // end namespace dsblock

#endif
