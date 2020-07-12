%length of each joint
l1 = 7 ;
l2 = 0;
l3 = 9.5;
l4 = 10.5;
l5 = 4;
l6 = 4;

%% Plot the robotic arm, in 6(start and end positions are the same) different positions.

pt=zeros(7,3);%to save end-effector position

%finding the postion of each joint and end effector from 0 to 4secs 
for i=0:0.1:4
   %%%%Equations found for the fifth order polynomial for position joints. 
    t=i;
    q1r = -90+2*t^2+26.125*t^3-9.921875*t^4+0.9921875*t^5;
    q2r = 2*t^2+12.0625*t^3-4.6484*t^4+0.46484*t^5 ;
    q3r = 2*t^2-16.063*t^3+5.898445*t^4-0.5898*t^5;
    q4r = 2*t^2-30.125*t^3+11.1719*t^4-1.1172*t^5 ;
    q5r = 180+2*t^2-16.063*t^3+5.89844*t^4-0.5898*t^5 ;
    q1=q1r;
    q2=q2r;
    q3=q3r;
    q4=q4r;
    q5=q5r;
    
   
    %% Trigonometric abbreviations
    c1 = cosd(q1);
    c2 = cosd(q2);
    c3 = cosd(q3);
    c4 = cosd(q4);
    c5 = cosd(q5); 
    s1 = sind(q1);
    s2 = sind(q2);
    s3 = sind(q3);
    s4 = sind(q4);
    s5 = sind(q5);
    
    T1 = [c1 -s1 0 0;s1 c1 0 0; 0 0 1 l1; 0 0 0 1];
    T2 = [c2 -s2 0 0;0 0 -1 0; s2 c2 0 0; 0 0 0 1];
    T3 = [c3 -s3 0 l3;s3 c3 0 0; 0 0 1 0; 0 0 0 1];
    T4 = [c4 -s4 0 l4;s4 c4 0 0; 0 0 1 0; 0 0 0 1];
    T5 = [c5 -s5 0 0;0 0 1 l5; -s5 -c5 0 0; 0 0 0 1];
    T6 = [1 0 0 0;0 1 0 0; 0 0 1 l6; 0 0 0 1];
    
    %forward kinematics
    FK = T1*T2*T3*T4*T5*T6;
   
    %base position
    x0 = 0;
    y0 = 0;
    z0 = 0;
    %T1(1:3,4)- first joint position
    x1 = 0;
    y1 = 0;
    z1 = 7;
    
    %M=T1*T2; M(1:3,4); second joint position
    x2 = 0;
    y2 = 0;
    z2 = 7;
    
    %M=T1*T2*T3; M(1:3,4);
    x3 = (19*cosd(q1)*cosd(q2))/2;
    y3 = (19*cosd(q2)*sind(q1))/2;
    z3 = (19*sind(q2))/2 + 7;

    %M=T1*T2*T3*T4; M(1:3,4);    
    x4 = (cosd(q1)*(21*cosd(q2 + q3) + 19*cosd(q2)))/2;
    y4 = (sind(q1)*(21*cosd(q2 + q3) + 19*cosd(q2)))/2;
    z4 = (21*sind(q2 + q3))/2 + (19*sind(q2))/2 + 7;

    %M=T1*T2*T3*T4*T5; M(1:3,4); 
    x5 = (cosd(q1)*(21*cosd(q2 + q3) - 8*sind(q2 + q3 + q4) + 19*cosd(q2)))/2;
    y5 = (sind(q1)*(21*cosd(q2 + q3) - 8*sind(q2 + q3 + q4) + 19*cosd(q2)))/2;
    z5 = 4*cosd(q2 + q3 + q4) + (21*sind(q2 + q3))/2 + (19*sind(q2))/2 + 7;

    
    %FK(1:3,4);end effector position
    xt = (cosd(q1)*(21*cosd(q2 + q3) - 16*sind(q2 + q3 + q4) + 19*cosd(q2)))/2;
    yt = (sind(q1)*(21*cosd(q2 + q3) - 16*sind(q2 + q3 + q4) + 19*cosd(q2)))/2;
    zt = 8*cosd(q2 + q3 + q4) + (21*sind(q2 + q3))/2 + (19*sind(q2))/2 + 7;
    

    
    figure (1) 
    
    xx = [ x0; x1; x2; x3; x4; x5; xt ] ;
    yy = [ y0; y1; y2; y3; y4; y5; yt ] ;
    zz = [ z0; z1; z2; z3; z4; z5; zt ] ;
    
    %plotting links
    plot3(xx,yy,zz,'ko-','Linewidth',2)
    grid on
    axis equal
    hold on
    axis([0 30 -30 30 -10 20])    
    xlabel('x (cm)') ; ylabel('y (cm)') ;zlabel('z (cm)');
    

    pause(1)
     
     
    hold off
  
end