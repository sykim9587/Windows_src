%length of each joint
l1 = 7 ;
l2 = 0;
l3 = 9.5;
l4 = 10.5;
l5 = 4;
l6 = 4;

%% Plot the robotic arm, in 31(start and end positions are the same) different positions.
%output of the Inverse Kinematics
q1r = [-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90	-90]'*pi/180 ;
q2r = [0	11.6177	16.9623	21.2887	25.0954	28.5757	31.8309	34.919	37.8777	40.7348	43.5087	46.2127	45.0155	36.1716	24.663	17.1856	34.8585	45.9896	66.2224	66.2224	68.5692	70.885	73.1682	75.4166	77.6297	79.8044	81.9375	84.0274	86.0701	88.0617	90]'*pi/180 ;
q3r = [0	-20.363	-28.7122	-35.058	-40.3494	-44.9537	-49.0623	-52.7849	-56.1923	-59.3362	-62.2508	-64.9611	-61.1583	-44.3313	-22.1021	-6.5214	-36.8401	-53.9229	-80.9929	-80.9929	-82.3987	-83.6847	-84.8519	-85.9007	-86.8335	-87.6501	-88.3504	-88.9359	-89.406	-89.7603	-90]'*pi/180 ;
q4r = [-180	-171.2547	-168.2501	-166.2307	-164.746	-163.6221	-162.7686	-162.1341	-161.6854	-161.3986	-161.2579	-161.2516	-163.8572	-171.8403	-182.561	-190.6642	-178.0184	-172.067	-165.2295	-165.2295	-166.1706	-167.2003	-168.3163	-169.516	-170.7962	-172.1542	-173.5871	-175.0915	-176.6641	-178.3014	-180]'*pi/180 ;
q5r = [90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90	90]'*pi/180 ;% q5 does not effect the end-effector but only orientation
q = [ q1r q2r q3r q4r q5r ] ;


pt=zeros(31,3);%to save end-effector position

%finding the postion of each joint and end effector
for i = 1:31

    q1=q(i,1);
    q2=q(i,2);
    q3=q(i,3);
    q4=q(i,4);
    q5=q(i,5);
    
   
    %% Trigonometric abbreviations
    c1 = cos(q1);
    c2 = cos(q2);
    c3 = cos(q3);
    c4 = cos(q4);
    c5 = cos(q5); 
    s1 = sin(q1);
    s2 = sin(q2);
    s3 = sin(q3);
    s4 = sin(q4);
    s5 = sin(q5);
    
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
    x3 = (19*cos(q1)*cos(q2))/2;
    y3 = (19*cos(q2)*sin(q1))/2;
    z3 = (19*sin(q2))/2 + 7;

    %M=T1*T2*T3*T4; M(1:3,4);    
    x4 = (cos(q1)*(21*cos(q2 + q3) + 19*cos(q2)))/2;
    y4 = (sin(q1)*(21*cos(q2 + q3) + 19*cos(q2)))/2;
    z4 = (21*sin(q2 + q3))/2 + (19*sin(q2))/2 + 7;

    %M=T1*T2*T3*T4*T5; M(1:3,4); 
    x5 = (cos(q1)*(21*cos(q2 + q3) - 8*sin(q2 + q3 + q4) + 19*cos(q2)))/2;
    y5 = (sin(q1)*(21*cos(q2 + q3) - 8*sin(q2 + q3 + q4) + 19*cos(q2)))/2;
    z5 = 4*cos(q2 + q3 + q4) + (21*sin(q2 + q3))/2 + (19*sin(q2))/2 + 7;

    
    %FK(1:3,4);end effector position
    xt = (cos(q1)*(21*cos(q2 + q3) - 16*sin(q2 + q3 + q4) + 19*cos(q2)))/2;
    yt = (sin(q1)*(21*cos(q2 + q3) - 16*sin(q2 + q3 + q4) + 19*cos (q2)))/2;
    zt = 8*cos(q2 + q3 + q4) + (21*sin(q2 + q3))/2 + (19*sin(q2))/2 + 7;
    
    pt(i,1)=xt;
    pt(i,2)=yt;
    pt(i,3)=zt;
    
    figure (1) 
  %%%Obstacle position   
    ox=0;
    oy=-15.25;
    oz=3.75;
    
    plot3(ox,oy,oz,'ro-','Linewidth',3)
    
  hold on
    
    xx = [ x0; x1; x2; x3; x4; x5; xt ] ;
    yy = [ y0; y1; y2; y3; y4; y5; yt ] ;
    zz = [ z0; z1; z2; z3; z4; z5; zt ] ;
    
    %plotting links
    plot3(xx,yy,zz,'ko-','Linewidth',2)
    grid on
    axis equal
    hold on
    axis([-10 30 -30 30 -10 20])    
    xlabel('x (cm)') ; ylabel('y (cm)') ;zlabel('z (cm)');
   
    %%%%% Showing a different view we
    az=77;
    el=20;   
    view([az,el])


    %to display the position of base and star-end point
    text(0,0,0,'x-base');
    text(pt(1,1),pt(1,2),pt(1,3),'x') ; text(pt(1,1) + 0.5,pt(1,2) + 0.5, pt(1,3) + 0.5, 'start');
    text(pt(31,1),pt(31,2),pt(31,3),'x') ; text(pt(31,1) + 0.5,pt(31,2) + 0.5, pt(31,3) + 0.5, 'end');
    pause(1)
    
    hold on
    
    
    hold off 
 
       
     

end