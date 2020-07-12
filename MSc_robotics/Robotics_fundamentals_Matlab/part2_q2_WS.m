%input
a=-45;
ca=cosd(a);
sa=sind(a);
rp=130; rb=290; ra=170; L=130;

%plotting the base
pb1=[0;rb;0];
pb2=[-rb*cosd(30); -rb*sind(30); 0];
pb3=[rb*cosd(30); -rb*sind(30); 0];
plot([pb1(1,1) pb2(1,1) pb3(1,1) pb1(1,1)],[pb1(2,1) pb2(2,1) pb3(2,1) pb1(2,1)])
axis([-400 400 -300 300])
xlabel('x (mm)') ; ylabel('y (mm)') ;
hold on

%% workspace 
for xc=-400:400
   for yc=-300:300
       
       C=[xc; yc; 0];
       T=[ca -sa 0; sa ca 0; 0 0 1];
       cpp1=[0; rp; 0];
       cpp2=[-rp*cosd(30); -rp*sind(30); 0];
       cpp3=[rp*cosd(30);-rp*sind(30);0];
       pp1c=T*cpp1+C;
       pp2c=T*cpp2+C;
       pp3c=T*cpp3+C;
       
       %from the pbi
       ppi1=[pp1c(1,1);pp1c(2,1)-rb; 0];
       ppi2=[pp2c(1,1)+rb*cosd(30);pp2c(2,1)+rb*sind(30); 0];
       ppi3=[pp3c(1,1)-rb*cosd(30);pp3c(2,1)+rb*sind(30); 0];
       
       % for pp1
       e1=-2*ppi1(2,1)*ra;
       e2=-2*ppi1(1,1)*ra;
       e3=ppi1(1,1)^2+ppi1(2,1)^2+ra^2-L^2;
       
       t1=(-e1+sqrt(e1^2+e2^2-e3^2))/(e3-e2);
       t2=(-e1-sqrt(e1^2+e2^2-e3^2))/(e3-e2);
       
       p1_theta1=2*atand(t1);
       p1_theta2=2*atand(t2);
       
       a=isreal(p1_theta1);
       b=isreal(p1_theta2);
       
       % for pp2
       e1=-2*ppi2(2,1)*ra;
       e2=-2*ppi2(1,1)*ra;
       e3=ppi2(1,1)^2+ppi2(2,1)^2+ra^2-L^2;
       
       t1=(-e1+sqrt(e1^2+e2^2-e3^2))/(e3-e2);
       t2=(-e1-sqrt(e1^2+e2^2-e3^2))/(e3-e2);
       
       p2_theta1=2*atand(t1);
       p2_theta2=2*atand(t2);
       
       c=isreal(p2_theta1);
       d=isreal(p2_theta2);
       
       % for pp3
       e1=-2*ppi3(2,1)*ra;
       e2=-2*ppi3(1,1)*ra;
       e3=ppi3(1,1)^2+ppi3(2,1)^2+ra^2-L^2;
       
       t1=(-e1+sqrt(e1^2+e2^2-e3^2))/(e3-e2);
       t2=(-e1-sqrt(e1^2+e2^2-e3^2))/(e3-e2);
       
       p3_theta1=2*atand(t1);
       p3_theta2=2*atand(t2);
       
       e=isreal(p3_theta1);
       f=isreal(p3_theta2);
       
       if (a+b+c+d+e+f==6) %plot the dot when all of the angles are real value.
           plot(xc,yc,'g.')
           hold on
       end
   end 
end
hold off
grid on