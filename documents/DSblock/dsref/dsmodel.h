/* dsmodel.h

   Header-file of classes to built dynamic system models in C++
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


#ifndef DSMODEL_H
#define DSMODEL_H

#include <float.h>


namespace dsblock {

// Enumeration types used in the DSblock
   enum Bool            {False = 0, True = 1};

   enum ClassType       {ClassClass   , ConnectorClass, RecordClass,
                         PackageClass , ModelClass    , BlockClass ,
                         FunctionClass, CrossingClass , VariableClass,
                         RealClass    , BooleanClass};
 
   enum InterfaceType   {Protected, Output, Input};

   enum VariabilityType {TimeVarying, // Changes during continuous integration.
                         Discrete   , // Changes ONLY at event instances.
                         Constant   , // Remains constant after the initial event.
                         Parameter }; // Remains constant during simulation run.
                                      // Can be set in simulation environment.

   enum PropertyType    {Known              , // Constant, Parameter or Input
                         ExpliciteAlgebraic ,
                         ImpliciteAlgebraic ,
                         ExpliciteDerivative,
                         ImpliciteDerivative,
                         State              ,
                         Residue            ,
                         New                ,
                         DiscreteState      ,
                         Alias              ,
                         NegativeAlias      };

   enum DemandType      {ComputeCrossings  ,
                         ComputeOutputs    ,
                         ComputeDerivatives,
                         ComputeAll        ,
                         ComputeJacobian};


// Corresponding enumeration type names as strings
   extern const char* const ClassTypeNames  [];
   extern const char* const VariabilityNames[];
   extern const char* const InterfaceNames  [];
   extern const char* const PropertyNames   [];


// Constants
   const int PrintPriorityLogVariable =  5;
   const int PrintPriorityEvent       = 10;
   const int PrintPriorityIteration   = 15;
   const int PrintPriorityCrossing    = 20;
   const int PrintPriorityBoolean     = 20;
   const int PrintPriorityEdge        = 30;


// Basic class for all variables and components in a model
// (usually not used directly; use sub-classes of ModelicaClass)
   class ModelicaClass {
     friend class DynamicSystem;
     friend class FullDynamicSystem;

     protected:
       const char*     Name;         // name of instance
       const char*     Description;  // description text of instance
       ModelicaClass*  Next;         // next component
       ModelicaClass*  Child;        // first sub-component
       ModelicaClass*  Father;       // father of component
       ModelicaClass*  Last;
       ClassType       CType;        // type of component (model, Real, ...)
       VariabilityType Variability;  // variability of component
       InterfaceType   Interface;    // interface of component
       Bool            Enable;       // true, if component is enabled

       void ModelicaClass::enableAll (Bool e); // sub-components and on 
                                               // same level

     public:
       ModelicaClass();
  

       void insert(ModelicaClass& comp, const char* compName);
     
       ModelicaClass& name       (const char* str){if (str) Name        = str; return *this;}
       ModelicaClass& description(const char* str){if (str) Description = str; return *this;}
       ModelicaClass& parameter  ()               {Variability = Parameter; return *this;}
       ModelicaClass& constant   ()               {Variability = Constant ; return *this;}
       ModelicaClass& input      ()               {Interface   = Input    ; return *this;}
       ModelicaClass& output     ()               {Interface   = Output   ; return *this;}

       const char*     name       () const {return Name;}
       const char*     description() const {return Description;}
       InterfaceType   interface  () const {return Interface;}
       VariabilityType variability() const {return Variability;}
       Bool            parameter  () const {return (Variability == Parameter
                                                    ? True : False);}
       Bool            constant   () const {return (Variability == Constant
                                                    ? True : False);}
       ModelicaClass*  next       () const {return Next;}
       ModelicaClass*  child      () const {return Child;}
       ModelicaClass*  father     () const {return Father;}

       ClassType   classType      () const {return CType;}
       const char* classTypeName  () const {return ClassTypeNames  [CType];}
       const char* variabilityName() const {return VariabilityNames[Variability];}
       const char* interfaceName  () const {return InterfaceNames  [Interface  ];}
   };


   inline void ModelicaClass::insert(ModelicaClass& comp, const char* compName) {
     // Insert the component in its container component
        if ( Last == 0 ) {
           Child = &comp;
        } else {
           Last->Next = &comp;
        }
        Last        = &comp;
        comp.Father = this;
        if ( compName != 0 ) comp.Name = compName;
   }



// Restricted (Modelica) classes to describe components
   class Connector : public ModelicaClass {
     public:
       Connector() {CType = ConnectorClass;}
   };


   class Record : public ModelicaClass {
     public:
       Record() {CType = RecordClass;}
   };


   class Package : public ModelicaClass {
     public:
       Package() {CType = PackageClass;}
   };


   class Model : public ModelicaClass {
     friend class DynamicSystem;
     friend class FullDynamicSystem;

     protected:
       int computeLabel;  // is set to zero at every new time instant

     public:
       Model() {CType = ModelClass; computeLabel = 0;}
       virtual void equation(DynamicSystem& sys){}
   };


   class Block : public Model {
     public:
       Block() {CType = BlockClass;}
   };


   class Function : public Block {
     public:
       Function() {CType = FunctionClass;}
   };



// (Modelica) Variable
   class Variable : public ModelicaClass {
     friend class DynamicSystem;
     friend class FullDynamicSystem;

     protected:
       PropertyType Property;     // type of variable
       Variable*    PropertyRef;  // = derivative(State)    , if property = State
                                  // = residue(ImpliciteXXX), if property = ImpliciteXXX
                                  // = variable             , if property = new(variable)
                                  // = alias                , if property = Alias
     public:
       Variable() {CType=VariableClass; Property=Known; PropertyRef=0;}
       PropertyType property    () const {return Property;}
       Variable&    propertyRef () const {return *PropertyRef;}
       const char*  propertyName() const {return PropertyNames[Property];}
   };


// (Modelica) Real variable
   class Real : public Variable {
     friend class DynamicSystem;
     friend class FullDynamicSystem;

     protected:
       double       Start;
       double       Min;
       double       Max;
       const char*  Quantity;
       const char*  Unit;
       const char*  DisplayUnit;
       Bool         Flow;    

     public:
       double _;   // actual value
 
       Real();

       void operator= (double d) {_ = d;};

       Real& name       (const char* str){if (str) Name        = str; return *this;}
       Real& description(const char* str){if (str) Description = str; return *this;}
       Real& flow       ()               {Flow        = True     ; return *this;}
       Real& discrete   ()               {Variability = Discrete ; return *this;}
       Real& parameter  ()               {Variability = Parameter; return *this;}
       Real& parameter  (double      num){Variability = Parameter; Start = num; return *this;}
       Real& constant   ()               {Variability = Constant ; return *this;}
       Real& constant   (double      num){Variability = Constant ; Start = num; return *this;}
       Real& input      ()               {Interface   = Input    ; return *this;}
       Real& output     ()               {Interface   = Output   ; return *this;}
       Real& enable     (Bool        e  ){Enable      = e        ; return *this;}

       Real& start      (double      num){Start = num; return *this;}
       Real& min        (double      num){Min   = num; return *this;}
       Real& max        (double      num){Max   = num; return *this;}
       Real& quantity   (const char* str){if (str) Quantity    = str; return *this;}
       Real& unit       (const char* str){if (str) Unit        = str; return *this;}
       Real& displayUnit(const char* str){if (str) DisplayUnit = str; return *this;}

       Real& propertyRef() const {return (Real& ) *PropertyRef;}
       Real& der        (Real&     state);
       Real& residue    (Real&       var);
       Real& newv       (Real&       var);
       Real& alias      (Real&       var);
       Real& negAlias   (Real&       var);

       const char*  name        () const {return Name;}
       const char*  description () const {return Description;}
       double       start       () const {return Start;}
       double       min         () const {return Min;}
       double       max         () const {return Max;}
       const char*  quantity    () const {return Quantity;}
       const char*  unit        () const {return Unit;}
       const char*  displayUnit () const {return DisplayUnit;}
       double       infinity    () const {return DBL_MAX;}  // return largest value
       Bool         flow        () const {return Flow;}
   };


   inline Real& Real::der(Real& state){
     // Define derivative of variable
        Property          = ExpliciteDerivative;
        state.Property    = State;
        state.PropertyRef = this;
        return *this;
   }
 

   inline Real& Real::newv(Real& var){
     // Define new(variable)
        Property    = New;
        PropertyRef = &var;
        return *this;
   }
 

   inline Real& Real::alias(Real& var){
     // Define alias of variable
        Property    = Alias;
        PropertyRef = &var;
        return *this;
   }
 

   inline Real& Real::negAlias(Real& var){
     // Define negative alias of variable
        Property    = NegativeAlias;
        PropertyRef = &var;
        return *this;
   }
 

// (Modelica) Boolean variable
   class Boolean : public Variable {
     friend class DynamicSystem;
     friend class FullDynamicSystem;

     protected:
       Bool Start;     // start value
       Bool evaluate;  // true, if value has been false previously

     public:
       Bool _;   // actual value
 
       Boolean() {CType = BooleanClass; Variability = Discrete;
                  Property = DiscreteState; _= False; Start = False;
                  evaluate = False; }

       void operator= (Bool b) {_ = b;};
       void operator= (int  i) {_ = (i == 0) ? False : True;};

       Boolean& name       (const char* str){if (str) Name        = str; return *this;}
       Boolean& description(const char* str){if (str) Description = str; return *this;}
       Boolean& parameter  ()               {Variability = Parameter; return *this;}
       Boolean& parameter  (Bool        num){Variability = Parameter; Start = num; return *this;}
       Boolean& constant   ()               {Variability = Constant ; return *this;}
       Boolean& constant   (Bool        num){Variability = Constant ; Start = num; return *this;}
       Boolean& input      ()               {Interface   = Input    ; return *this;}
       Boolean& output     ()               {Interface   = Output   ; return *this;}
       Boolean& enable     (Bool        e  ){Enable      = e        ; return *this;}
       Boolean& start      (Bool        num){Start = num; return *this;}

       Boolean& propertyRef() const {return (Boolean& ) *PropertyRef;}
       Boolean& newv       (Boolean& var);
       Boolean& alias      (Boolean& var);
       Boolean& negAlias   (Boolean& var);

       const char*  name        () const {return Name;}
       const char*  description () const {return Description;}
       Bool         start       () const {return Start;}
   };


   inline Boolean& Boolean::newv(Boolean& var){
     // Define new(variable)
        Property    = New;
        PropertyRef = &var;
        return *this;
   }
 

   inline Boolean& Boolean::alias(Boolean& var){
     // Define alias of variable
        Property    = Alias;
        PropertyRef = &var;
        return *this;
   }
 

   inline Boolean& Boolean::negAlias(Boolean& var){
     // Define negative alias of variable
        Property    = NegativeAlias;
        PropertyRef = &var;
        return *this;
   }
 


// Buffer to hold names of DSblock instance tree
   class NameBuffer {
     private:
       char* buffer;     // holds full component names
       int*  index;      // index into component names
       int   iPos;       // index[iPos] is '\0'
       int   lenName;    // length of name in buffer
       int   dimBuffer;  // dimension of buffer vector
       int   dimIndex;   // dimension of index vector

     public:
       NameBuffer();
       NameBuffer(int lenNameMax, int levelMax);

       void        push       (const char* name);
       void        pop        ();        
       void        clear      ();
       void        resize     (int lenNameMax, int levelMax);
       int         lenFullName() {return (dimIndex > 0 ? index[iPos] : 0);}
       const char* fullNamePtr() {return buffer;}
       char*       fullName   ();
   };


// Access functions for simulation run time information and
// Modelica event operators
   class DynamicSystem {
     friend class Crossing;

     protected:
       DemandType Demand;          // required action
       double     Time;            // actual time instant
       double     StartTime;
       double     NextTimeEvent;   // next time event closest to Time
       double     zEpsLarge;       // large hysteresis epsilon for crossing functions
       double     zEpsSmall;       // small hysteresis epsilon for crossing functions
       double     SampleAccuracy;  // relative accuracy of sample interval
       int        MaxIteration;    // maximum number of model iterations at
                                   // an event
       int        PrintPriority;   // 0 .. 100 (no ... full output)
       Bool       Event;           // true at an event instant
       Bool       Initial;         // true at the first iteration of the initial event
       Bool       Terminal;        // true at the terminal event
       Bool       IterationEvent;  // true when a new event is triggered at
                                   // an event
       Bool       DimChanged;      // true if system dimensions changed
       Bool       zDimChanged;     // true if number of crossing functions changed
       Bool       EnableChanged;   // true if enable attributes changed
       Bool       Debug;           // true if debug output desired

       // Model to be simulated
          Model& model;

       // Buffer for instance names
          int        LenNameMax;   // maximum length of all instance names
          int        LevelMax;     // maximum number of all component levels
          NameBuffer nameBuffer;
          char*      tempBuffer;   // strlen(tempBuffer) = LenNameMax+1;

       // Internal functions
          void zSignUpdate(Crossing& z, double v);  // update sign of crossing function
          Bool sample2    (double start, double interval); 

     public:
       DynamicSystem();

       DemandType demand   () {return Demand;}    // type of action
       double     time     () {return Time;}      // actual time instant
       double     startTime() {return StartTime;} 
       Bool       initial  () {return Initial;}
       Bool       terminal () {return Terminal;}
       Bool       event    () {return Event;}

       int        sign    (Crossing& z);   // Inquire sign of crossing variable
       Bool       edge    (Boolean&  b);   // if ( edge(b) ) ... = "when b then ..."

       Bool       sample  (double start, double interval){return (!Event ? False : sample2(start,interval));}
       void       enable  (ModelicaClass& c, Bool b     ); // enable=b for c and sub-components
                          // enable is not yet fully implemented!!!

       const char* fullNamePtr  (ModelicaClass& c); // name of component c (internal buffer used)
       char*       fullName     (ModelicaClass& c); // name of component c (newly allocated memory)
       void        logVariable  (Variable&      v); // print "v.Name=v._", if in debug mode
       void        debug        (Bool           b) {Debug = b;}          // false/true no/debug output enabled
       void        printPriority(int            p) {PrintPriority = p;}  // priority of debug output
   };

   inline void DynamicSystem::enable(ModelicaClass& c, Bool b) {
     // Change enable attribute of "c" and of all of its sub-components
        if ( b == c.Enable ) return;
        c.Enable      = b;
        EnableChanged = True;
        if ( c.Child ) c.Child->enableAll(b);
   }



// Zero-crossing variable (zero crossing triggers event)
   class Crossing : public ModelicaClass {
     friend class DynamicSystem;
     friend class FullDynamicSystem;

     protected:
       DynamicSystem* sys;        // Computing environment
       Bool           Interval;   // True, if z in interval
       double         zPos;       // Postive crossing variable
       double         zNeg;       // Negative crossing variable
       double         Eps;        // Epsilon for hysteresis
       int            Sign;       // = -1,0,+1  (sign of z)

     public:
       Crossing       ()         {CType=CrossingClass; sys=0; Interval=True;
                                  zPos=0.0; zNeg=0.0; Eps=0.0; Sign=0;}
       void operator= (double v) {if (sys->Event) sys->zSignUpdate(*this, v);
                                  zPos = v + Eps;
                                  zNeg = v - Eps;}
   };

   inline int DynamicSystem::sign (Crossing& z) {return z.Sign;}


// Define the model to be simulated (to be defined in model file)
   extern Model& newModel();


}  // end namespace dsblock

#endif
