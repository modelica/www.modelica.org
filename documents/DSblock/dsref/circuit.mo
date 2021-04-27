
type Voltage     = Real(quantity="Voltage"    , unit="V");
type Current     = Real(quantity="Current"    , unit="A");
type Resistance  = Real(quantity="Resistance" , unit="Ohm", min=0.0);
type Capacitance = Real(quantity="Capacitance", unit="F"  , min=0.0);
type Inductance  = Real(quantity="Inductance" , unit="H"  , min(0.0);
type Frequency   = Real(quantity="Frequency"  , unit="Hz");


connector Pin 
  Voltage      v  "Potential at the pin";
  flow Current i  "Current flowing into the pin";
end Pin;


partial model TwoPin
  Pin     p "Positive pin";
  Pin     n "Negative pin";
  Voltage v "Voltage drop between the two pins";
equation
  v = p.v - n.v;
end TwoPin;


model Resistor
  extends TwoPin;
  parameter Resistance R;
equation
  v = R*p.i;
end Resistor;


model Capacitor 
  extends TwoPin;
  parameter Capacitance C;
equation
  C*der(v) = p.i;
end Capacitor;


model Inductor
  extends TwoPin; 
  parameter Inductance L;
equation
  L*der(p.i) = v;
end Inductor;


model Ground
  Pin p;
equation
  p.v = 0;
end Ground;


model VsourceAC
  extends TwoPin;
  Voltage       VA=220 "Amplitude";
  Frequency     f = 50;
  constant Real PI=3.141592653589793;
end VsourceAC;


model Circuit "Simple circuit as demonstration example"
  Resistor  R1 (R= 10);
  Resistor  R2 (R=100);
  Capacitor C  (C=0.01);
  Inductor  L  (L=0.1);
  VsourceAC AC;
  Ground    G;
equation
  connect (AC.p, R1.p); 
  connect (R1.n, C.p);
  connect (C.n, AC.n);
  connect (R1.p, R2.p);
  connect (R2.n, L.p);
  connect (L.n,  C.n);
  connect (AC.n, G.p);
end Circuit;

