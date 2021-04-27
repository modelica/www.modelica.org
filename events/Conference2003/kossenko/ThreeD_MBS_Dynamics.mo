package ThreeD_MBS_Dynamics 
  import SI = Modelica.SIunits;
  partial model RigidBody 
    KinematicPort OutPort annotation (extent=[-10, -100; 10, -80]);
    // Mass of the body
    parameter SI.Mass m=1;
    // Body's tensor of inertia
    parameter SI.MomentOfInertia I[3, 3]=[1, 0, 0; 0, 1, 0; 0, 0, 1];
    // Radius vector of masscenter
    SI.Position r[3];
    // Velocity vector of masscenter
    SI.Velocity v[3];
    // Acceleration vector of masscenter
    SI.Acceleration a[3];
    // Quaternion of body orientation
    Real q[4];
    // Vector of angular rate
    SI.AngularVelocity omega[3];
    // Vector of angular acceleration
    SI.AngularAcceleration epsilon[3];
    // Sum of all forces applied
    SI.Force F[3];
    // Sum of all torques applied
    SI.Torque M[3];
    // Matrix of rotation
    Real T[3, 3];
    annotation (Icon, Diagram);
  equation 
    der(r) = v;
    der(v) = a;
    m*a = F;
    der(q) = 0.5*QMult(q, {0,omega[1],omega[2],omega[3]});
    der(omega) = epsilon;
    T = [q[1]^2 + q[2]^2 - q[3]^2 - q[4]^2, 2*(q[2]*q[3] - q[1]*q[4]), 2*(q[2]*
      q[4] + q[1]*q[3]); 2*(q[1]*q[4] + q[2]*q[3]), q[1]^2 - q[2]^2 + q[3]^2 - 
      q[4]^2, 2*(q[3]*q[4] - q[1]*q[2]); 2*(q[2]*q[4] - q[1]*q[3]), 2*(q[1]*q[2]
       + q[3]*q[4]), q[1]^2 - q[2]^2 - q[3]^2 + q[4]^2]/sqrt(q*q);
    I*epsilon + cross(omega, I*omega) = transpose(T)*M;
    OutPort.r = r;
    OutPort.v = v;
    OutPort.a = a;
    OutPort.T = T;
    OutPort.omega = T*omega;
    OutPort.epsilon = T*epsilon;
  end RigidBody;
  
  partial model Constraint 
    KinematicPort InPortA annotation (extent=[-40, -100; -20, -80]);
    WrenchPort OutPortA annotation (extent=[-40, 80; -20, 100]);
    annotation (Diagram);
    KinematicPort InPortB annotation (extent=[20, -100; 40, -80]);
    WrenchPort OutPortB annotation (extent=[20, 80; 40, 100]);
  equation 
    OutPortA.F + OutPortB.F = {0,0,0};
    OutPortA.M + OutPortB.M = {0,0,0};
  end Constraint;
  
  connector KinematicPort 
    // Radius vector of masscenter
    SI.Position r[3];
    // Velocity vector of masscenter
    SI.Velocity v[3];
    // Acceleration vector of masscenter
    SI.Acceleration a[3];
    // Matrix of rotation
    Real T[3, 3];
    // Vector of angular rate
    SI.AngularVelocity omega[3];
    // Vector of angular acceleration
    SI.AngularAcceleration epsilon[3];
  end KinematicPort;
  
  connector WrenchPort 
    SI.Position P[3];
    SI.Force F[3];
    SI.Torque M[3];
  end WrenchPort;
  
  model Base 
    extends BaseBody;
    VisualShape Plane(
      r0={0,0,0}, 
      Shape="box", 
      LengthDirection={0,-1,0}, 
      WidthDirection={1,0,0}, 
      Length=0.1, 
      Width=10, 
      Height=10, 
      Material={0,0,1,0});
    WrenchPort InPortRoll annotation (extent=[-10, 80; 10, 100]);
    annotation (Diagram);
  equation 
    OutPort.r = {0,0,0};
    OutPort.v = {0,0,0};
    OutPort.a = {0,0,0};
    OutPort.T = [1, 0, 0; 0, 1, 0; 0, 0, 1];
    OutPort.omega = {0,0,0};
    OutPort.epsilon = {0,0,0};
    Plane.S = OutPort.T;
    Plane.r = OutPort.r;
  end Base;
  
  model Test 
    parameter SI.Acceleration g=9.81;
    inner parameter SI.Acceleration[3] Gravity={0,-g,0};
    // Ellipsoid semi-diameters
    inner parameter SI.Length a1=2;
    inner parameter SI.Length b1=1;
    inner parameter SI.Length c1=3;
    inner parameter SI.Angle delta=Modelica.Constants.pi/10;
    annotation (
      Diagram, 
      experiment(
        StopTime=300, 
        NumberOfIntervals=100000, 
        Tolerance=1e-010), 
      experimentSetupOutput);
    Base Base1 annotation (extent=[-60, 0; -40, 20]);
    RollingBody RollingBody1(
      q(start={1,0,0,0}), 
      r(start={0,1,0}), 
      I=[2, 0, 0; 0, 3, 0; 0, 0, 1], 
      v(start={0.05,0,0}), 
      omega(start={0,-1,-0.05})) annotation (extent=[20, 0; 40, 20]);
    Ellipsoid_on_Plane Ellipsoid_on_Plane1 annotation (extent=[-20, 0; 0, 20]);
  equation 
    connect(Base1.InPortRoll, Ellipsoid_on_Plane1.OutPortA)
      annotation (points=[-50, 19; -50, 30; -13, 30; -13, 19]);
    connect(Base1.OutPort, Ellipsoid_on_Plane1.InPortA)
      annotation (points=[-50, 1; -50, -10; -13, -10; -13, 1]);
    connect(Ellipsoid_on_Plane1.InPortB, RollingBody1.OutPort)
      annotation (points=[-7, 1; -7, -10; 30, -10; 30, 1]);
    connect(Ellipsoid_on_Plane1.OutPortB, RollingBody1.InPortRoll)
      annotation (points=[-7, 19; -7, 30; 30, 30; 30, 19]);
  end Test;
  
  model RollingBody 
    extends RigidBody;
    outer SI.Acceleration[3] Gravity;
    // Ellipsoid semiaxes
    outer SI.Length a1;
    outer SI.Length b1;
    outer SI.Length c1;
    VisualShape Body(
      r0={0,0,-c1}, 
      Shape="sphere", 
      LengthDirection={0,0,1}, 
      WidthDirection={1,0,0}, 
      Length=2*c1, 
      Width=2*a1, 
      Height=2*b1, 
      Material={1,0,0,1});
    SI.Position p1[3];
    SI.Energy E;
    SI.Energy K1;
    SI.Energy K2;
    SI.Energy P;
    Real Mod_q2;
    WrenchPort InPortRoll annotation (extent=[-10, 80; 10, 100]);
  equation 
    F = m*Gravity + InPortRoll.F;
    M = InPortRoll.M + cross(InPortRoll.P - r, InPortRoll.F);
    Body.S = T;
    Body.r = r;
    p1 = r + T*{2,0,0};
    K1 = 0.5*m*v*v;
    K2 = 0.5*omega*I*omega;
    P = -m*r*Gravity;
    E = K1 + K2 + P;
    Mod_q2 = q[1]^2 + q[2]^2 + q[3]^2 + q[4]^2;
    annotation (Diagram);
  end RollingBody;
  
  model BaseBody 
    KinematicPort OutPort annotation (extent=[-10, -100; 10, -80]);
    annotation (Icon, Diagram);
  end BaseBody;
  
  function QMult 
    input Real q1[4];
    input Real q2[4];
    output Real q3[4];
  protected 
    Real a1;
    Real a2;
    Real A1[3];
    Real A2[3];
    Real A3[3];
  algorithm 
    a1 := q1[1];
    A1 := {q1[2],q1[3],q1[4]};
    a2 := q2[1];
    A2 := {q2[2],q2[3],q2[4]};
    A3 := a1*A2 + a2*A1 + cross(A1, A2);
    q3 := {a1*a2 - A1*A2,A3[1],A3[2],A3[3]};
  end QMult;
  
  partial model Roll 
    extends Constraint;
    SI.Position r[3];
  equation 
    InPortA.v + cross(InPortA.omega, r - InPortA.r) = InPortB.v + cross(InPortB
      .omega, r - InPortB.r);
    OutPortA.P = r;
    OutPortB.P = r;
    OutPortB.M = {0,0,0};
  end Roll;
  
  model Ellipsoid_on_Plane 
    extends Roll;
    // Ellipsoid semi-diameters
    outer SI.Length a1;
    outer SI.Length b1;
    outer SI.Length c1;
    outer SI.Angle delta;
    
    
      // Matrix of rotation with an angle delta about y-axis relative to principal-axis system
    parameter Real R[3, 3]=[cos(delta), 0, sin(delta); 0, 1, 0; -sin(delta), 0, 
         cos(delta)];
    // Matrix of ellipsoid equation relative to canonic axes
    parameter Real B1[3, 3]=[1/a1^2, 0, 0; 0, 1/b1^2, 0; 0, 0, 1/c1^2];
    // Matrix of ellipsoid equation relative to principal axes
    parameter Real B[3, 3]=R*B1*transpose(R);
    // Normal vector to plane
    parameter Real n[3]={0,1,0};
    parameter Real d=0;
    Real lambda;
  equation 
    n*r = d;
    n = lambda*InPortB.T*B*transpose(InPortB.T)*(r - InPortB.r);
  end Ellipsoid_on_Plane;
  
  model Case_of_Kane_Constraint 
    extends Roll;
    // Ellipsoid semiaxes
    outer Real a1;
    outer Real b1;
    outer Real c1;
    outer Real delta;
    outer Real h;
    
    
      // Matrix of rotation with an angle delta about y-axis relative to principal-axis system
    parameter Real R[3, 3]=[cos(delta), 0, sin(delta); 0, 1, 0; -sin(delta), 0, 
         cos(delta)];
    // Matrix of ellipsoid equation relative to canonic axes
    parameter Real B1[3, 3]=[1/a1^2, 0, 0; 0, 1/b1^2, 0; 0, 0, 1/c1^2];
    // Matrix of ellipsoid equation relative to principal axes
    parameter Real B[3, 3]=R*B1*transpose(R);
    // Normal vector to plane
    parameter Real n[3]={0,1,0};
    // Shift of a surface center
    parameter Real x0[3]={0,h,0};
    parameter Real d=0;
    Real lambda;
  equation 
    n*r = d;
    n = lambda*InPortB.T*B*(transpose(InPortB.T)*(r - InPortB.r) - x0);
  end Case_of_Kane_Constraint;
  
  model Case_of_Kane_Rattleback 
    extends RigidBody;
    outer Real[3] Gravity;
    // Ellipsoid semi-diameters
    outer Real a1;
    outer Real b1;
    outer Real c1;
    outer Real h;
    VisualShape Body(
      r0={0,h,-c1}, 
      Shape="sphere", 
      LengthDirection={0,0,1}, 
      WidthDirection={1,0,0}, 
      Length=2*c1, 
      Width=2*a1, 
      Height=2*b1, 
      Material={1,0,0,1});
    //  Real p1[3];
    Real E;
    Real K1;
    Real K2;
    Real P;
    Real Mod_q2;
    Real gamma(start=0);
    Real delta;
    Real KaneGamDeg;
    WrenchPort InPortRoll annotation (extent=[-10, 80; 10, 100]);
  equation 
    F = m*Gravity + InPortRoll.F;
    M = InPortRoll.M + cross(InPortRoll.P - r, InPortRoll.F);
    Body.S = T;
    Body.r = r;
    K1 = 0.5*m*v*v;
    K2 = 0.5*omega*I*omega;
    P = -m*r*Gravity;
    E = K1 + K2 + P;
    Mod_q2 = q[1]^2 + q[2]^2 + q[3]^2 + q[4]^2;
    der(gamma) = OutPort.omega[2];
    KaneGamDeg = -gamma*180/Modelica.Constants.pi;
    delta = Modelica.Math.acos({0,1,0}*(T*{0,1,0}))*180/Modelica.Constants.pi;
    annotation (Diagram);
  end Case_of_Kane_Rattleback;
  
  model Case_of_Kane_Test 
    parameter Real g=9.81;
    parameter Real alpha=0.5*Modelica.Constants.pi/180;
    parameter Real beta=0.5*Modelica.Constants.pi/180;
    inner parameter Real[3] Gravity={0,-g,0};
    
    // Ellipsoid semi-diameters
    inner parameter Real a1=0.2;
    inner parameter Real b1=0.02;
    inner parameter Real c1=0.03;
    inner parameter Real delta=0.01428182891938;
    parameter Real qalpha[4]={cos(alpha/2),sin(alpha/2)*cos(delta),0,-sin(alpha
        /2)*sin(delta)};
    parameter Real qbeta[4]={cos(beta/2),sin(beta/2)*sin(delta),0,sin(beta/2)*
        cos(delta)};
    inner parameter Real h=0.01;
    annotation (
      Diagram, 
      experiment(
        StopTime=20, 
        NumberOfIntervals=50000, 
        Tolerance=1e-010), 
      experimentSetupOutput);
    Base Base1(Plane(
        Length=0.01, 
        Width=0.5, 
        Height=0.5)) annotation (extent=[-60, 0; -40, 20]);
    Case_of_Kane_Rattleback RollingBody1(
      q(start=QMult(qalpha, QMult(qbeta, {1,0,0,0}))), 
      r(start={0.0172989203771403,0.0100769534556172,-0.000303278424757918}), 
      I=[0.000199714344, 0, 0; 0, 0.0017, 0; 0, 0, 0.001600285656], 
      v(start={-0.0503696159308381,0.086491308436296,0.000754798213773296}), 
      omega(start={0,5,0})) annotation (extent=[20, 0; 40, 20]);
    Case_of_Kane_Constraint Ellipsoid_on_Plane1
      annotation (extent=[-20, 0; 0, 20]);
  equation 
    connect(Base1.InPortRoll, Ellipsoid_on_Plane1.OutPortA)
      annotation (points=[-50, 19; -50, 30; -13, 30; -13, 19]);
    connect(Base1.OutPort, Ellipsoid_on_Plane1.InPortA)
      annotation (points=[-50, 1; -50, -10; -13, -10; -13, 1]);
    connect(Ellipsoid_on_Plane1.InPortB, RollingBody1.OutPort)
      annotation (points=[-7, 1; -7, -10; 30, -10; 30, 1]);
    connect(Ellipsoid_on_Plane1.OutPortB, RollingBody1.InPortRoll)
      annotation (points=[-7, 19; -7, 30; 30, 30; 30, 19]);
  end Case_of_Kane_Test;
  
  model Case_of_Borisov_Test 
    parameter SI.Acceleration g=100;
    inner parameter SI.Acceleration[3] Gravity={0,-g,0};
    // Ellipsoid semi-diameters
    inner parameter SI.Length a1=2;
    inner parameter SI.Length b1=1;
    inner parameter SI.Length c1=3;
    inner parameter SI.Length delta=-0.2;
    annotation (
      Diagram, 
      experiment(
        StopTime=150, 
        NumberOfIntervals=100000, 
        Tolerance=1e-010), 
      experimentSetupOutput);
    Base Base1 annotation (extent=[-60, 0; -40, 20]);
    RollingBody RollingBody1(
      q(start={1,0,0,0}), 
      r(start={0,1,0}), 
      I=[6, 0, 0; 0, 7, 0; 0, 0, 5], 
      v(start={2,0,0}), 
      omega(start={0,19,-2})) annotation (extent=[20, 0; 40, 20]);
    Ellipsoid_on_Plane Ellipsoid_on_Plane1 annotation (extent=[-20, 0; 0, 20]);
  equation 
    connect(Base1.InPortRoll, Ellipsoid_on_Plane1.OutPortA)
      annotation (points=[-50, 19; -50, 30; -13, 30; -13, 19]);
    connect(Base1.OutPort, Ellipsoid_on_Plane1.InPortA)
      annotation (points=[-50, 1; -50, -10; -13, -10; -13, 1]);
    connect(Ellipsoid_on_Plane1.InPortB, RollingBody1.OutPort)
      annotation (points=[-7, 1; -7, -10; 30, -10; 30, 1]);
    connect(Ellipsoid_on_Plane1.OutPortB, RollingBody1.InPortRoll)
      annotation (points=[-7, 19; -7, 30; 30, 30; 30, 19]);
  end Case_of_Borisov_Test;
end ThreeD_MBS_Dynamics;
