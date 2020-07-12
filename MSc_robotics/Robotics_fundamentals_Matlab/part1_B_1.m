%length of each joint
l1 = 7 ;
l2 = 0;
l3 = 9.5;
l4 = 10.5;
l5 = 4;
l6 = 4;

%% Plot the robotic arm, in 6(start and end positions are the same) different positions
%input of the forward kinematics
q1r = [0 -90 -90 -90 90 0 0]'*pi/180 ;
q2r = [0 0 0 90 90 90 0]'*pi/180 ;
q3r = [0 0 0 -90 -90 -90 0]'*pi/180 ;
q4r = [0 0 -180 -180 -180 -180 0]'*pi/180 ;
q5r = [0 0 90 90 90 0 0]'*pi/180 ;% q5 does not effect the end-effector but only orientation
q = [ q1r q2r q3r q4r q5r ] ;%7 row 5 colume matrix

%finding the postion of the end effector
for i = 1:7
    
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
    
    %it will display the end effector's position and orientation
    FK = T1*T2*T3*T4*T5*T6 
  
end