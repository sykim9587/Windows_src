%% for joint 1 - 1st CCD
%initial position
x0=0;x1=5;
y0=0;y1=0;
%Target position TP
TP=[0,-20]';
%for position 4
%TP=[0,-10.5]';
xx = [ x0; x1] ;
yy = [ y0; y1] ;
   
figure (1)
set(1,'position',[700 190 560 420])

plot(xx,yy,'ko-','Linewidth',2)
text(xx(1,1)+7,yy(1,1)+2,'start position');
hold on
%JtoE:Joint to End-Effector
%JtoT:Joint to Target Point
JtoE=[xx(2,1)-xx(1,1);yy(2,1)-yy(1,1)];
JtoT=[TP(1,1)-xx(1,1);TP(2,1)-yy(1,1)];
CosAngle= dot(JtoE,JtoT)/((norm(JtoE))*(norm(JtoT)));
SinAngle=sqrt(1-CosAngle^2);
theta=atan2d(SinAngle,CosAngle);

%if KSin, which is simplified cross product of JtoT and JtoE, is negative, theta needs to be -theta (negative rotation)
KSin=JtoE(1,1)*JtoT(2,1)-JtoE(2,1)*JtoT(1,1);
if KSin<0
    theta=-theta;
end

%Rotational Matrix
RotM=[cosd(theta) -sind(theta);sind(theta) cosd(theta)];
%New coordinate
New=RotM*[xx(2,1);yy(2,1)];
xx(2,1)=New(1,1);
yy(2,1)=New(2,1);

%plotting links and the Target Position
plot(TP(1,1),TP(2,1),'ko')
text(TP(1,1)+1,TP(2,1)+1,'target position');
grid on
axis equal
axis([-5 30 -30 30])
xlabel('x (cm)') ; ylabel('y (cm)') ;
plot(xx,yy,'ko-','Linewidth',2)
pause(1)
hold off

%output of 1st CCD
disp('joint 1 angle value')
display(theta)



%% from joint 2 to joint 4 -2nd CCD
%initial position of all joints
x0=0;x1=9.5;x2=20;x3=20;
y0=7;y1=7;y2=7;y3=15;
TP=[20,-1]';
%for position 4
%TP=[10.5,8.5]';
xx = [ x0; x1; x2; x3] ;
yy = [ y0; y1; y2; y3] ;

error=100;    
%The iteration will stop when the error becomes smaller than 0.3
while (error>0.3)  
%CCD moves the outer joint first.
for i=4:-1:2
    
JtoE=[xx(4,1)-xx(i-1,1);yy(4,1)-yy(i-1,1)];
JtoT=[TP(1,1)-xx(i-1,1);TP(2,1)-yy(i-1,1)];
CosAngle= dot(JtoE,JtoT)/((norm(JtoE))*(norm(JtoT)));
SinAngle=sqrt(1-CosAngle^2);
theta=atan2d(SinAngle,CosAngle);

%if Ksin,which is the simplified cross product of JtoE and JtoT, is
%negative, theta needs to be -theta (negative direction)
KSin=JtoE(1,1)*JtoT(2,1)-JtoE(2,1)*JtoT(1,1);
if KSin<0
    theta=-theta;
end

%since unnatually big theta can generate unreliable result, we set the
%limit of theta.
if (theta > 20)
    theta = 20;
elseif (theta < -20)
    theta = -20;
end

%Rotational Matrix
RotM=[cosd(theta) -sind(theta);sind(theta) cosd(theta)];

%applying to all the joints that is related. for instance, if we are
%manipulating 2nd joint, 3rd and 4th joint has to be rotated as well.
for k=4:-1:i
New=RotM*[xx(k,1)-xx(i-1,1);yy(k,1)-yy(i-1,1)]+[xx(i-1,1);yy(i-1,1)];
xx(k,1)=New(1,1);
yy(k,1)=New(2,1);
end

%plotting the diagram
figure (2)
set(2,'position',[116 190 560 420])
plot(TP(1,1),TP(2,1),'ko')
text(TP(1,1)+1,TP(2,1)+1,'target position');
grid on
axis equal
axis([-5 30 -20 30])
xlabel('x (cm)') ; ylabel('y (cm)') ;
hold on
%plotting links- (0,0) was added in order to create fist link that does not
%move during the CCD.
plot([0;xx],[0;yy],'ko-','Linewidth',2)
pause(0.3)
hold off
end
error = dist([xx(4,1),yy(4,1)], TP);
disp('error')
disp(error)
end
fprintf('error is smaller than 0.3cm\n\n')


%% output of the 2nd CCD
%2nd joint
for l=2
JtoE=[xx(l,1)-xx(l-1,1);yy(l,1)-yy(l-1,1)];
%randomly chose a point so that it can create horizontal line.
JtoP=[10;0];
CosAngle= dot(JtoE,JtoP)/((norm(JtoE))*(norm(JtoP)));
SinAngle=sqrt(1-CosAngle^2);
fprintf('%d joint angle',l)
theta=atan2d(SinAngle,CosAngle);
%from geometry, if yy(2,1) is smaller than 7, it means the negative
%rotation.
if (yy(2,1)<7)
    theta=-theta; 
end
disp(theta)
end

%3rd joint
for l=3
JtoE=[xx(l,1)-xx(l-1,1);yy(l,1)-yy(l-1,1)];
JtoP=[xx(l-1,1)-xx(l-2,1);yy(l-1,1)-yy(l-2,1)];
CosAngle= dot(JtoE,JtoP)/((norm(JtoE))*(norm(JtoP)));
SinAngle=sqrt(1-CosAngle^2);
fprintf('%d joint angle',l)
theta=atan2d(SinAngle,CosAngle);
if (yy(2,1)>yy(3,1))
    theta=-theta; 
end
disp(theta)
end

%4th joint
for l=4
JtoE=[xx(l,1)-xx(l-1,1);yy(l,1)-yy(l-1,1)];
JtoP=[xx(l-1,1)-xx(l-2,1);yy(l-1,1)-yy(l-2,1)];
CosAngle= dot(JtoE,JtoP)/((norm(JtoE))*(norm(JtoP)));
SinAngle=sqrt(1-CosAngle^2);
fprintf('%d joint angle',l)
theta=atan2d(SinAngle,CosAngle);
%according to the proximal convention axis, this has to be done.
theta=theta-90;
disp(theta)
end