clear all
close all

l1 = 10; 
l2 = 7; 
l3 = 5;
npts = 17;

% theta1 values
theta1=linspace(0,pi,npts*2); 
th1_t=theta1(1:2:end);
th1_v=theta1(2:2:end);
th1_t = [th1_t, 3.1416];
th1_v = [0,th1_v];



% theta2 values
theta2=linspace(0,pi/2,npts*2);
th2_t=theta2(1:2:end);
th2_v=theta2(2:2:end);
th2_t = [th2_t, 1.5708];
th2_v = [0,th2_v];

% theta3 values
theta3=linspace(-pi/2,pi/2,npts*2);
th3_t=theta3(1:2:end);
th3_v=theta3(2:2:end);
th3_t = [th3_t, 1.5708];
th3_v = [-1.5708,th3_v];

%by adding the end and finish points, it reduced the error at the edge of
%the workspace


[THETA1_t,THETA2_t,THETA3_t] = meshgrid(th1_t,th2_t,th3_t); % generate a grid of theta1, theta2 and theta3 values for training data
[THETA1_v,THETA2_v,THETA3_v] = meshgrid(th1_v,th2_v,th3_v); % generate a grid of theta1, theta2 and theta3 values for validation data

X_t = l1 * cos(THETA1_t) + l2 * cos(THETA1_t + THETA2_t)+l3*cos(THETA1_t + THETA2_t+THETA3_t)+0.001*randn(size(THETA1_t)); % compute x coordinates input - training data
Y_t = l1 * sin(THETA1_t) + l2 * sin(THETA1_t + THETA2_t) +l3*sin(THETA1_t + THETA2_t+THETA3_t)+0.001*randn(size(THETA1_t)); % compute y coordinates input - training data
phi_t=THETA1_t+THETA2_t+THETA3_t+0.01*randn(size(THETA1_t)); % orientation of the end-effector 

X_v = l1 * cos(THETA1_v) + l2 * cos(THETA1_v + THETA2_v)+l3*cos(THETA1_v + THETA2_v+THETA3_v)+0.001*randn(size(THETA1_t)); % compute x coordinates input - validation data
Y_v = l1 * sin(THETA1_v) + l2 * sin(THETA1_v + THETA2_v)+l3*sin(THETA1_v + THETA2_v+THETA3_v)+0.001*randn(size(THETA1_t)); % compute y coordinates input - validation data
phi_v=THETA1_v+THETA2_v+THETA3_v+0.01*randn(size(THETA1_t)); % orientation of the end-effector 


%Training and validation data for Theta1 anfis
data1_t = [X_t(:) Y_t(:) phi_t(:) THETA1_t(:)]; % create x-y-theta1 training dataset
data1_v = [X_v(:) Y_v(:) phi_v(:) THETA1_v(:)]; % create x-y-theta1 validation dataset
%Training and validation data for Theta2 anfis
data2_t = [X_t(:) Y_t(:) phi_t(:) THETA2_t(:)]; % create x-y-theta2 training dataset
data2_v = [X_v(:) Y_v(:) phi_v(:) THETA2_v(:)]; % create x-y-theta2 validation dataset
%Training and validation data for Theta3 anfis
data3_t = [X_t(:) Y_t(:) phi_t(:) THETA3_t(:)]; % create x-y-theta3 training dataset
data3_v = [X_v(:) Y_v(:) phi_v(:) THETA3_v(:)]; % create x-y-theta3 validation dataset


%% Generation of initial FIS with genfis function using equally spaced MFs (Grid Partition)

gen_opt = genfisOptions('GridPartition'); 
gen_opt.NumMembershipFunctions = [4 4 4]; 
gen_opt.InputMembershipFunctionType = "gaussmf"; 

%Initial FIS for Theta1
iniFIS_1 = genfis([X_t(:) Y_t(:) phi_t(:)],THETA1_t(:),gen_opt); 

%Initial FIS for Theta2
iniFIS_2 = genfis([X_t(:) Y_t(:) phi_t(:)],THETA2_t(:),gen_opt);

%Initial FIS for Theta3
iniFIS_3 = genfis([X_t(:) Y_t(:) phi_t(:)],THETA3_t(:),gen_opt);


%% Generating anfis
opt = anfisOptions;
opt.InitialFIS = iniFIS_1; %Initial FIS structure for data1
opt.EpochNumber = 200;
opt.DisplayANFISInformation = 1; 
opt.DisplayErrorValues =0;
opt.DisplayStepSize = 0;
opt.DisplayFinalResults =1; 
opt.OptimizationMethod = 1; %hybrid. if 0,only backpropagation
opt.ValidationData = data1_v; %Validation data for Theta1

%% training an ANFIS system
% theta 1 
disp('--> Training first ANFIS network.')
[anfis1,trnErr1,ss1,chkFIS1,chkErr1] = anfis(data1_t,opt);
 
% Update initial FIS and validation data and train an ANFIS system
% using the second set of training data, theta 2.
disp('--> Training second ANFIS network.')
opt.InitialFIS = iniFIS_2;
opt.ValidationData = data2_v;
[anfis2,trnErr2,ss2,chkFIS2,chkErr2]  = anfis(data2_t,opt);

disp('--> Training third ANFIS network.')
opt.InitialFIS = iniFIS_3;
opt.ValidationData = data3_v;
[anfis3,trnErr3,ss3,chkFIS3,chkErr3]  = anfis(data3_t,opt);

%% Plotting optimized FIS
figure (2)
[x,mf]=plotmf(anfis1,'input',1);
subplot(3,3,1), plot(x,mf);
title('Subplot 1: Final FIS for X - Theta1')
[x,mf]=plotmf(anfis1,'input',2);
subplot(3,3,2), plot(x,mf);
title('Subplot 2: Final FIS for Y - Theta1')
[x,mf]=plotmf(anfis1,'input',3);
subplot(3,3,3), plot(x,mf);
title('Subplot 2: Final FIS for phi - Theta1')

[x,mf]=plotmf(anfis2,'input',1);
subplot(3,3,4), plot(x,mf);
title('Subplot 3: Fianl FIS for X - Theta2')
[x,mf]=plotmf(anfis2,'input',2);
subplot(3,3,5), plot(x,mf);
title('Subplot 4: Final FIS for Y - Theta2')
[x,mf]=plotmf(anfis2,'input',3);
subplot(3,3,6), plot(x,mf);
title('Subplot 4: Final FIS for phi - Theta2')

[x,mf]=plotmf(anfis3,'input',1);
subplot(3,3,7), plot(x,mf);
title('Subplot 5: Fianl FIS for X - Theta3')
[x,mf]=plotmf(anfis3,'input',2);
subplot(3,3,8), plot(x,mf);
title('Subplot 6: Final FIS for Y - Theta3')
[x,mf]=plotmf(anfis3,'input',3);
subplot(3,3,9), plot(x,mf);
title('Subplot 6: Final FIS for phi - Theta3')

%% comparing angle error 

%Output data from anfis1

Theta1P=evalfis([X_t(:),Y_t(:),phi_t(:)],anfis1);     %Evaluation of training data different options possible
chkOut1=evalfis( [X_v(:),Y_v(:),phi_v(:)], chkFIS1);     %Evaluation of validation data
trnRMSE1=norm(Theta1P-THETA1_t(:))/sqrt(length(Theta1P)); %Training errors for data1  = trnErr1
chkRMSE1=norm(chkOut1-THETA1_v(:))/sqrt(length(chkOut1)); %Validation errors for data1 = chkErr1

%Output data from anfis2

Theta2P=evalfis([X_t(:),Y_t(:),phi_t(:)],anfis2); %Evaluation of training data
chkOut2=evalfis([X_v(:),Y_v(:),phi_v(:)],chkFIS2); %Evaluation of validation data
trnRMSE2=norm(Theta2P-THETA2_t(:))/sqrt(length(Theta2P)); %Training errors for data2 = trnErr2 
chkRMSE2=norm(chkOut2-THETA2_v(:))/sqrt(length(chkOut2)); %Validation errors for data2 = chkErr2

%Output data from anfis3

Theta3P=evalfis([X_t(:),Y_t(:),phi_t(:)],anfis3); %Evaluation of training data
chkOut3=evalfis([X_v(:),Y_v(:),phi_v(:)],chkFIS3); %Evaluation of validation data
trnRMSE3=norm(Theta3P-THETA3_t(:))/sqrt(length(Theta3P)); %Training errors for data2 = trnErr3 
chkRMSE3=norm(chkOut3-THETA3_v(:))/sqrt(length(chkOut3)); %Validation errors for data2 = chkErr3

%Plotting errors evolution

figure (3)
plot(trnErr1,'r')
hold on
plot(chkErr1,'g')
title('Training & Validation Errors - Theta1')
xlabel('Number of Epochs')
ylabel('Errors')


figure (4)
plot(trnErr2,'r')
hold on
plot(chkErr2,'g')
title('Training & Validation Errors - Theta2')
xlabel('Number of Epochs')
ylabel('Errors')

figure (5)
plot(trnErr3,'r')
hold on
plot(chkErr3,'g')
title('Training & Validation Errors - Theta3')
xlabel('Number of Epochs')
ylabel('Errors')

%% comparing position error 

% Using FK to transform outputs from anfis networks into cartesian coordinates
X_p = l1 * cos(chkOut1) + l2 * cos(chkOut1 + chkOut2)+ l3 * cos(chkOut1 + chkOut2 +chkOut3);  % compute x coordinates input - validation data
Y_p = l1 * sin(chkOut1) + l2 * sin(chkOut1 + chkOut2) + l3 * sin(chkOut1 + chkOut2 +chkOut3); % compute y coordinates input - validation data
%Distances between validation points and coordinates resulting from anfis -validation data
u_x = X_p - X_v(:);
v_y = Y_p - Y_v(:);
%Errors as Euclidean distances between original and anfis results
XY_error=sqrt(u_x.^2+v_y.^2);
median_XY_error=median(XY_error); %median value of all errors
avg_XY_error=mean(XY_error); %average error in XY coordinates
max_XY_error=max(XY_error); %Max errorm
min_XY_error=min(XY_error); %Min error
std_XY_error=std(XY_error); %Standard deviation
median_percentage=100*median_XY_error/(l1+l2+l3); %percentage of median value wrt total arm reach
disp('median_XY_error');
disp(median_XY_error);
disp('max_XY_error');
disp(max_XY_error);
disp('min_XY_error');
disp(min_XY_error);
disp('percentage of median error value wrt total arm reach (%)');
disp(median_percentage);

%Plotting errors on XY coordinates with Quiver plot - Validation data
figure(6)
quiver(X_v(:),Y_v(:),u_x,v_y)
title('Anfis evaluation - XY coordinates')
 
 