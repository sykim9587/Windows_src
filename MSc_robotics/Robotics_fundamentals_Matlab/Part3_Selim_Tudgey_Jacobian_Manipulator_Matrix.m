syms q1 q2 q3 q4 q5 l1 l2 l3 l4 l5 l6 

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

%%%%Theta 1 
FK = T1*T2*T3*T4*T5*T6;
simplify(FK);

nx=simplify(FK(1,1));
py=simplify(FK(2,4));
ny=simplify(FK(2,1));
px=simplify(FK(1,4));
Tdix=(-nx*py)+(ny*px);
simplify(Tdix);
ox=simplify(FK(1,2));
oy=simplify(FK(2,2));
Tdiy=(-ox*py)+(oy*px);
simplify(Tdiy);
ax=simplify(FK(1,3));
ay=simplify(FK(2,3));
Tdiz=(-ax*py)+(ay*px);
simplify(Tdiz);
Tq1x=simplify(FK(3,1));
Tq1y=simplify(FK(3,2));
Tq1z=simplify(FK(3,3));
Theta1= simplify([Tdix; Tdiy; Tdiz; Tq1x; Tq1y; Tq1z;])

% Theta 2 
FK = T2*T3*T4*T5*T6;
simplify(FK);

nx=simplify(FK(1,1));
py=simplify(FK(2,4));
ny=simplify(FK(2,1));
px=simplify(FK(1,4));
Td2x=(-nx*py)+(ny*px);
simplify(Tdix);
ox=simplify(FK(1,2));
oy=simplify(FK(2,2));
Td2y=(-ox*py)+(oy*px);
simplify(Tdiy);
ax=simplify(FK(1,3));
ay=simplify(FK(2,3));
Td2z=(-ax*py)+(ay*px);
simplify(Tdiz);
Tq2x=simplify(FK(3,1));
Tq2y=simplify(FK(3,2));
Tq2z=simplify(FK(3,3));
Theta2= simplify([Td2x; Td2y; Td2z; Tq2x; Tq2y; Tq2z;])

% Theta 3
FK = T3*T4*T5*T6;
simplify(FK);

nx=simplify(FK(1,1));
py=simplify(FK(2,4));
ny=simplify(FK(2,1));
px=simplify(FK(1,4));
Td3x=(-nx*py)+(ny*px);
simplify(Tdix);
ox=simplify(FK(1,2));
oy=simplify(FK(2,2));
Td3y=(-ox*py)+(oy*px);
simplify(Tdiy);
ax=simplify(FK(1,3));
ay=simplify(FK(2,3));
Td3z=(-ax*py)+(ay*px);
simplify(Tdiz);
Tq3x=simplify(FK(3,1));
Tq3y=simplify(FK(3,2));
Tq3z=simplify(FK(3,3));
Theta3= simplify([Td3x; Td3y; Td3z; Tq3x; Tq3y; Tq3z;])

% Theta 4
FK = T4*T5*T6;
simplify(FK);

nx=simplify(FK(1,1));
py=simplify(FK(2,4));
ny=simplify(FK(2,1));
px=simplify(FK(1,4));
Td4x=(-nx*py)+(ny*px);
simplify(Tdix);
ox=simplify(FK(1,2));
oy=simplify(FK(2,2));
Td4y=(-ox*py)+(oy*px);
simplify(Tdiy);
ax=simplify(FK(1,3));
ay=simplify(FK(2,3));
Td4z=(-ax*py)+(ay*px);
simplify(Tdiz);
Tq4x=simplify(FK(3,1));
Tq4y=simplify(FK(3,2));
Tq4z=simplify(FK(3,3));
Theta4= simplify([Td4x; Td4y; Td4z; Tq4x; Tq4y; Tq4z;])

% Theta 5
FK = T5*T6;
simplify(FK);

nx=simplify(FK(1,1));
py=simplify(FK(2,4));
ny=simplify(FK(2,1));
px=simplify(FK(1,4));
Td5x=(-nx*py)+(ny*px);
simplify(Tdix);
ox=simplify(FK(1,2));
oy=simplify(FK(2,2));
Td5y=(-ox*py)+(oy*px);
simplify(Tdiy);
ax=simplify(FK(1,3));
ay=simplify(FK(2,3));
Td5z=(-ax*py)+(ay*px);
simplify(Tdiz);
Tq5x=simplify(FK(3,1));
Tq5y=simplify(FK(3,2));
Tq5z=simplify(FK(3,3));
Theta5= simplify([Td5x; Td5y; Td5z; Tq5x; Tq5y; Tq5z;])

% Theta 6
FK = T6;
simplify(FK);

nx=simplify(FK(1,1));
py=simplify(FK(2,4));
ny=simplify(FK(2,1));
px=simplify(FK(1,4));
Td6x=(-nx*py)+(ny*px);
simplify(Tdix);
ox=simplify(FK(1,2));
oy=simplify(FK(2,2));
Td6y=(-ox*py)+(oy*px);
simplify(Tdiy);
ax=simplify(FK(1,3));
ay=simplify(FK(2,3));
Td6z=(-ax*py)+(ay*px);
simplify(Tdiz);
Tq6x=simplify(FK(3,1));
Tq6y=simplify(FK(3,2));
Tq6z=simplify(FK(3,3));
Theta6= simplify([Td6x; Td6y; Td6z; Tq6x; Tq6y; Tq6z;])





