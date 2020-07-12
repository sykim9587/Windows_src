a=-45;xc=30;yc=30;
C=[xc; yc; 0];%input
ca=cosd(a);
sa=sind(a);
rp=130; rb=290; ra=170; L=130;
%rotation around z axis
T=[ca -sa 0; sa ca 0; 0 0 1];
%platform (original position)
cpp1=[0; rp; 0];
cpp2=[-rp*cosd(30); -rp*sind(30); 0];
cpp3=[rp*cosd(30);-rp*sind(30);0];

%platform (after transformation)
pp1c=T*cpp1+C;
pp2c=T*cpp2+C;
pp3c=T*cpp3+C;

%base PBi
pb1=[0;rb;0];
pb2=[-rb*cosd(30); -rb*sind(30); 0];
pb3=[rb*cosd(30); -rb*sind(30); 0];

%PPi w.r.t. to frame PBi
ppi1=[pp1c(1,1);pp1c(2,1)-rb; 0];
ppi2=[pp2c(1,1)+rb*cosd(30);pp2c(2,1)+rb*sind(30); 0];
ppi3=[pp3c(1,1)-rb*cosd(30);pp3c(2,1)+rb*sind(30); 0];
%% calculating thetas for each point & finding the position of Mi(first link)
% for theta1
e1=-2*ppi1(2,1)*ra;
e2=-2*ppi1(1,1)*ra;
e3=ppi1(1,1)^2+ppi1(2,1)^2+ra^2-L^2;

t1=(-e1+sqrt(e1^2+e2^2-e3^2))/(e3-e2);
t2=(-e1-sqrt(e1^2+e2^2-e3^2))/(e3-e2);

p1_theta1=2*atand(t1);
p1_theta2=2*atand(t2);

% for M1 
m1_x1=cosd(p1_theta1)*ra;
m1_y1=sind(p1_theta1)*ra+rb;

m1_x2=cosd(p1_theta2)*ra;
m1_y2=sind(p1_theta2)*ra+rb;

% for theta2
e1=-2*ppi2(2,1)*ra;
e2=-2*ppi2(1,1)*ra;
e3=ppi2(1,1)^2+ppi2(2,1)^2+ra^2-L^2;

t1=(-e1+sqrt(e1^2+e2^2-e3^2))/(e3-e2);
t2=(-e1-sqrt(e1^2+e2^2-e3^2))/(e3-e2);

p2_theta1=2*atand(t1);
p2_theta2=2*atand(t2);

% for M2 
m2_x1=cosd(p2_theta1)*ra-(rb*cosd(30));
m2_y1=sind(p2_theta1)*ra-(rb*sind(30));

m2_x2=cosd(p2_theta2)*ra-rb*cosd(30);
m2_y2=sind(p2_theta2)*ra-rb*sind(30);


% for theta3
e1=-2*ppi3(2,1)*ra;
e2=-2*ppi3(1,1)*ra;
e3=ppi3(1,1)^2+ppi3(2,1)^2+ra^2-L^2;

t1=(-e1+sqrt(e1^2+e2^2-e3^2))/(e3-e2);
t2=(-e1-sqrt(e1^2+e2^2-e3^2))/(e3-e2);

p3_theta1=2*atand(t1);
p3_theta2=2*atand(t2);

% for M3
m3_x1=cosd(p3_theta1)*ra+(rb*cosd(30));
m3_y1=sind(p3_theta1)*ra-(rb*sind(30));

m3_x2=cosd(p3_theta2)*ra+rb*cosd(30);
m3_y2=sind(p3_theta2)*ra-rb*sind(30);
%% plotting the diagram 
%plot the base
plot([pb1(1,1) pb2(1,1) pb3(1,1) pb1(1,1)],[pb1(2,1) pb2(2,1) pb3(2,1) pb1(2,1)])
axis([-400 400 -300 300])
xlabel('x (mm)') ; ylabel('y (mm)') ;
hold on
%plot the platform
plot([pp1c(1,1) pp2c(1,1) pp3c(1,1) pp1c(1,1)],[pp1c(2,1) pp2c(2,1) pp3c(2,1) pp1c(2,1)])
%link 1
plot([pb1(1,1) m1_x1 pp1c(1,1)],[pb1(2,1) m1_y1 pp1c(2,1)])
plot([pb1(1,1) m1_x2 pp1c(1,1)],[pb1(2,1) m1_y2 pp1c(2,1)])
%link 2
plot([pb2(1,1) m2_x1 pp2c(1,1)],[pb2(2,1) m2_y1 pp2c(2,1)])
plot([pb2(1,1) m2_x2 pp2c(1,1)],[pb2(2,1) m2_y2 pp2c(2,1)])
%link 3
plot([pb3(1,1) m3_x1 pp3c(1,1)],[pb3(2,1) m3_y1 pp3c(2,1)])
plot([pb3(1,1) m3_x2 pp3c(1,1)],[pb3(2,1) m3_y2 pp3c(2,1)])
%plot the postion of M (first link)
plot(m1_x1,m1_y1,'c+:')
plot(m1_x2,m1_y2,'c+:')
plot(m2_x1,m2_y1,'c+:')
plot(m2_x2,m2_y2,'c+:')
plot(m3_x1,m3_y1,'c+:')
plot(m3_x2,m3_y2,'c+:')
grid on
hold off