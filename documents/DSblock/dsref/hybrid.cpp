
#include <math.h>
#include "dsmodel.h"

using namespace dsblock;

class Hybrid : public Model { public:
  // variables of model
     Real    g;
     Real    hStart;
     Real    h, v, a, der_h, der_v, new_h, new_v;
     Real    u;
     Real    y1;
     Real    y2, der_y2, new_y2;
     Boolean yL;
     Boolean trigger, new_trigger;

  // auxiliary variables for crossing functions and when clauses
     Crossing z1, z2, z3, z4;
     Boolean  b1, b2, b3, b4, b5;

  Hybrid();
  void equation(DynamicSystem& sys);
};


Hybrid::Hybrid() {
  // register all components
     insert(g          ,"g");
     insert(hStart     ,"hStart");
     insert(h          ,"h");
     insert(v          ,"v");
     insert(a          ,"a");
     insert(der_h      ,"der_h");
     insert(der_v      ,"der_v");
     insert(new_h      ,"new_h");
     insert(new_v      ,"new_v");
     insert(u          ,"u");
     insert(y1         ,"y1");
     insert(y2         ,"y2");
     insert(der_y2     ,"der_y2");
     insert(new_y2     ,"new_y2");
     insert(yL         ,"yL");
     insert(trigger    ,"trigger");
     insert(new_trigger,"new_trigger");

     insert(z1,"z1");
     insert(z2,"z2");
     insert(z3,"z3");
     insert(z4,"z4");
     insert(b1,"b1");
     insert(b2,"b2");
     insert(b3,"b3");
     insert(b4,"b4");
     insert(b5,"b5");


  // define other component attributes
     g.parameter(9.81);
     hStart.parameter(1.0);
     der_h.der(h);
     der_v.der(v);
     new_h.newv(h);
     new_v.newv(v);
     u.output();
     y1.output();
     y2.output();
     der_y2.der(y2);
     new_y2.newv(y2);
     yL.start(False);
     new_trigger.newv(trigger);
 
     z1.description("u - 1");
     z2.description("u + 1");
     z3.description("y1 - 0.5");
     z4.description("h");
     b1.description("y - 0.5");
     b2.description("initial()");
     b3.description("h");
     b4.description("sample(0.0, 0.5)");
     b5.description("sample(0.0, 0.5)");

     name("Hybrid");
     description("Test hybrid features of Modelica and DSblock");
};


void Hybrid::equation(DynamicSystem& sys) {
  // Equations of simple circuit
     double time = sys.time();

  // Compute only the minimum needed part of the equations
     if ( computeLabel > 0 ) return;

  // Test event operator and crossing functions
     u  = time - 2.0;
     z1 = u._ - 1.0;
     z2 = u._ + 1.0;

     if ( sys.sign(z1) > 0 ) {
        y1 = 1.0;
     } else if ( sys.sign(z2) < 0 ) {
        y1 = -1.0;
     } else {
        y1 = u._;
     }

  // Test when operator and crossing functions
     z3 = y1._ - 0.5;
     b1 = sys.sign(z3) > 0.0;
     if ( sys.edge(b1) ) {
        yL = True;
     }

  // Test when, initial and new operator on Real (jumping ball)
     a     = -g._;
     der_h =  v._;
     der_v =  a._;
     b2    = sys.initial();

     if ( sys.edge(b2) ) {
        new_h = hStart._;
     }

     z4 = h._;
     b3 = sys.sign(z4) < 0;
     if ( sys.edge(b3) ) {
        new_v = -0.9*v._;
     }
     
  // Test when, sample and new (generate triangle signal)
     der_y2 = 1.0;
     b4 = sys.sample(0.0, 0.5);
     if ( sys.edge(b4) ) {
        new_y2 = 0.0; 
     }
 
  // Test new operator on Boolean
     b5 = sys.sample(0.0, 0.5);
     if ( sys.edge(b5) ) {
        new_trigger = !trigger._;
     }
      
     computeLabel = 1;
}


Model& dsblock::newModel() {
  // Instanciate a new model
     Model  *model = new Hybrid;
     return *model;
}


