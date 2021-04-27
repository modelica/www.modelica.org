model hybrid "Test hybrid features of Modelica and DSblock"
   // Declarations
      parameter Real    g=9.81;
      parameter Real    hStart = 1;
                Real    h, v, a;
                Real    u;
      output    Real    y1;
      output    Real    y2;
                Boolean yL(start=false);
                Boolean trigger;

equation
   // Test event operator and crossing functions
      u  = time - 2;
      y1 = if event(u >  1 ) then  1  else
           if event(u < -1 ) then -1  else u;

   // Test when operator and crossing functions
      when y1 > 0.5 do
         yL := true;
      end when;

   // Test when, initial and new operator on Real (jumping ball)
      der(h) = v;
      der(v) = a;
      a      = -g;

      when Initial(time) do
        new(h) := hStart;
      end when;

      when h < 0 do
         new(v) := -0.9*v;
      end when;
     
   // Test when, sample and new  (generate triangle signal)
      der(y2) = 1.0;
      when Sample(0.0, 0.5) do
         new(y2) := 0.0; 
      end when;
 
   // Test new operator on Boolean
      when Sample(0.0, 0.5) do
         new(trigger) := not trigger;
      end when;
      
end hybrid;
