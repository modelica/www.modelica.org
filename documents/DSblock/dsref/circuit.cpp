
#include <math.h>
#include "dsmodel.h"

using namespace dsblock;


class Voltage : public Real { public: Voltage() {
  quantity("Voltage"); unit("V");
}};


class Current : public Real { public: Current() {
  quantity("Current"); unit("A");
}};


class Resistance : public Real { public: Resistance() {
  quantity("Resistance"); unit("Ohm"); min(0.0);
}};


class Capacitance : public Real { public: Capacitance() {
  quantity("Capacitance"); unit("F"); min(0.0);
}};


class Inductance : public Real { public: Inductance() {
  quantity("Inductance"); unit("H"); min(0.0);
}};


class Frequency : public Real { public: Frequency() {
  quantity("Frequency"); unit("Hz");
}};


class Pin : public Connector { public:
  Voltage v;
  Current i;

  Pin() {
    // register all components 
       insert(v,"v");
       insert(i,"i");

    // define other component attributes
       v.description("Potential at the pin");
       i.description("Current flowing into the pin").flow();
  }
};


class TwoPin : public Model { public:
  Pin     p;
  Pin     n;
  Voltage v;

  TwoPin() {
    // register all components 
       insert(p,"p");
       insert(n,"n");
       insert(v,"v");

    // define other component attributes
       p.description("Positive pin");
       n.description("Negative pin");
       v.description("Voltage drop between the two pins");
  }
};


class Resistor : public TwoPin { public:
  Resistance R;
  Resistor() {
    insert(R,"R");
    R.parameter();
  }
};


class Capacitor : public TwoPin { public:
  Capacitance C;
  Real        der_v;
  Capacitor() {
    insert(C    , "C");      C.parameter();
    insert(der_v, "der_v");  der_v.der(v);
  }
};


class Inductor : public TwoPin { public:
  Inductance L;
  Real       der_i;
  Inductor() {
    insert(L    , "L");      L.parameter();
    insert(der_i, "der_i");  der_i.der(p.i);
  }
};


class Ground : public Model { public:
  Pin p;
  Ground() {
    insert(p,"p");
  }
};


class VsourceAC : public TwoPin { public:
  Voltage   VA;
  Frequency f;
  Real      PI;

  VsourceAC() {
    // register all components 
       insert(VA,"VA");
       insert(f ,"f");
       insert(PI,"PI");

    // define other component attributes
       VA.parameter(220.0).description("Amplitude");   
       f.parameter ( 50.0);
       PI.constant (3.141592653589793);
  }
};


class Circuit : public Model { public:
  Resistor  R1;
  Resistor  R2;
  Capacitor C;
  Inductor  L;
  VsourceAC AC;
  Ground    G;

  Circuit();
  void equation(DynamicSystem& sys);
};


Circuit::Circuit() {
  // register all components 
     insert(R1,"R1");
     insert(R2,"R2");
     insert(C ,"C" );
     insert(L ,"L" );
     insert(AC,"AC");
     insert(G ,"G" );

  // define other component attributes
     R1.R.parameter(10.0);
     R2.R.parameter(100.0);
     C.C.parameter (0.01);
     L.L.parameter (0.1);
     name("Circuit");
     description("Simple circuit as demonstration example");

  // define alias and constant variables
     G.p.v.constant(0.0);
     R1.p.v.alias(AC.v);    // R1.p.v = AC.v
     R2.p.v.alias(AC.v);
};


void Circuit::equation(DynamicSystem& sys) {
  // Equations of simple circuit
     int equationStructure[5] = {0,  // ComputeCrossings
                                 0,  // ComputeOutputs
                                 1,  // ComputeDerivatives
                                 2,  // ComputeAll
                                 0}; // ComputeJacobian
     int stopLabel = equationStructure[sys.demand()];
     double Qw101;
     double time = sys.time();

  // Compute only the minimum needed part of the equations
     if ( computeLabel >= stopLabel ) return;
     switch ( ++computeLabel ) {
       case 1:
         Qw101     = sin(2.0*AC.PI._*AC.f._*time);
         AC.p.v._  = AC.VA._*Qw101;
         R1.p.i._  = (AC.p.v._ - C.v._)/R1.R._;
         AC.p.i._  = - (R1.p.i._ + L.p.i._);
         AC.v._    = AC.p.v._;
         R1.v._    = AC.p.v._ - C.v._;
         R2.n.v._  = AC.p.v._ - R2.R._*L.p.i._;
         R2.v._    = AC.p.v._ - R2.n.v._;
         C.der_v._ = R1.p.i._ / C.C._;
         L.der_i._ = R2.n.v._ / L.L._;
         if ( stopLabel <= 1 ) break;

       case 2:
         G.p.i._   = R1.p.i._ + L.p.i._ + AC.p.i._;
         if ( stopLabel <= 2 ) break;
     }
     computeLabel = stopLabel;
}



Model& dsblock::newModel() {
  // Instanciate a new model
     Model  *model = new Circuit;
     return *model;
}

