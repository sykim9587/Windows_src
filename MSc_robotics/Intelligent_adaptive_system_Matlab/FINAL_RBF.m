clear all
close all

l1 = 10; 
l2 = 7; 
l3 = 5;
npts = 5800;

theta1=linspace(0,pi,npts*2);
rTHETA1_t=theta1(1:2:end);
rTHETA1_v=theta1(2:2:end);
rTHETA1_t = [rTHETA1_t, 3.1416];
rTHETA1_v = [0,rTHETA1_v];

theta2=linspace(0,pi/2,npts*2); 
rTHETA2_t=theta2(1:2:end);
rTHETA2_v=theta2(2:2:end);
rTHETA2_t = [rTHETA2_t, 1.5708];
rTHETA2_v = [0,rTHETA2_v];

theta3=linspace(-pi/2,pi/2,npts*2); 
rTHETA3_t=theta3(1:2:end);
rTHETA3_v=theta3(2:2:end);
rTHETA3_t = [rTHETA3_t, 1.5708];
rTHETA3_v = [-1.5708,rTHETA3_v];

%randomize the array
a= rTHETA1_v ;
[m,n] = size(a) ;
idx = randperm(n) ;
THETA1_v = a ;
THETA1_v(1,idx) = a(1,:); 


a= rTHETA2_v ;
[j,n] = size(a) ;
idx = randperm(n) ;
THETA2_v = a ;
THETA2_v(1,idx) = a(1,:); 

a= rTHETA3_v ;
[k,n] = size(a) ;
idx = randperm(n) ;
THETA3_v = a ;
THETA3_v(1,idx) = a(1,:); 

a= rTHETA1_t ;
[l,n] = size(a) ;
idx = randperm(n) ;
THETA1_t = a ;
THETA1_t(1,idx) = a(1,:); 


a= rTHETA2_t ;
[h,n] = size(a) ;
idx = randperm(n) ;
THETA2_t = a ;
THETA2_t(1,idx) = a(1,:); 

a= rTHETA3_t ;
[q,n] = size(a) ;
idx = randperm(n) ;
THETA3_t = a ;
THETA3_t(1,idx) = a(1,:); 
 
%forward kinematics 
X_t = l1 * cos(THETA1_t) + l2 * cos(THETA1_t + THETA2_t)+l3*cos(THETA1_t + THETA2_t+THETA3_t); % compute x coordinates input - training data
Y_t = l1 * sin(THETA1_t) + l2 * sin(THETA1_t + THETA2_t) +l3*sin(THETA1_t + THETA2_t+THETA3_t); % compute y coordinates input - training data
phi_t=THETA1_t+THETA2_t+THETA3_t;

X_v = l1 * cos(THETA1_v) + l2 * cos(THETA1_v + THETA2_v)+l3*cos(THETA1_v + THETA2_v+THETA3_v); % compute x coordinates input - validation data
Y_v = l1 * sin(THETA1_v) + l2 * sin(THETA1_v + THETA2_v)+l3*sin(THETA1_v + THETA2_v+THETA3_v); % compute y coordinates input - validation data
phi_v=THETA1_v+THETA2_v+THETA3_v;


%Training and validation data for the network
data_t = [X_t; Y_t; phi_t]; 
data_v = [X_v; Y_v; phi_v]; 

THETA_t=[THETA1_t ;THETA2_t ;THETA3_t];
THETA_v=[THETA1_v ;THETA2_v ;THETA3_v];
%% generating RBF
net1 = newrb(data_t,THETA_t,0.0,5.5,500,100);
%check the network with validation data
theta_P=sim(net1,data_v);


theta1_P=theta_P(1,:);
theta2_P=theta_P(2,:);
theta3_P=theta_P(3,:);   
%get position using the output of RBF network
 X_p = l1 * cos(theta1_P) + l2 * cos(theta1_P + theta2_P)+l3*cos(theta1_P + theta2_P+theta3_P);
 Y_p = l1 * sin(theta1_P) + l2 * sin(theta1_P + theta2_P) +l3*sin(theta1_P + theta2_P+theta3_P);
 

 u_x = X_p - X_v;
 v_y = Y_p - Y_v;

%Errors as Euclidean distances between original and anfis results

XY_error=sqrt(u_x.^2+v_y.^2); 
median_XY_error=median(XY_error); %median value of all errors
avg_XY_error=mean(XY_error); %average error in XY coordinates
max_XY_error=max(XY_error); %Max error
min_XY_error=min(XY_error); %Min error
std_XY_error=std(XY_error); %Standard deviation
median_percentage=100*median_XY_error/(l1+l2+l3); %percentage of median value wrt total arm reach
disp('median_XY_error');
disp(median_XY_error);
disp('max_XY_error');
disp(max_XY_error);
disp('min_XY_error');
disp(min_XY_error);
disp('median_percentage');
disp(median_percentage);

%Plotting errors on XY coordinates with Quiver plot - Validation data
figure(1)
quiver(X_v,Y_v,u_x,v_y)
title('RBF evaluation - XY coordinates')
 


 