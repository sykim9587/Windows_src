

X_w=[];
Y_w=[];
%% Workspace
q1s = 0:pi/180:pi;
q2s = 0:pi/180:pi/2;
q3s = -pi/2:pi/180:pi/2;

%% Plot the workspace of the robot


step = 5;
for i = 1:step:180	
    for j = 1:step:90   
        for k =1:step:180
            THETA1_t=q1s(1,i);
            THETA2_t=q2s(1,j);
            THETA3_t=q3s(1,k);
            X_wd = l1 * cos(THETA1_t) + l2 * cos(THETA1_t + THETA2_t)+l3*cos(THETA1_t + THETA2_t+THETA3_t);
            Y_wd = l1 * sin(THETA1_t) + l2 * sin(THETA1_t + THETA2_t) +l3*sin(THETA1_t + THETA2_t+THETA3_t);
            X_w = [X_w, X_wd];
            Y_w = [Y_w, Y_wd];
        end
    end
end


figure (1)
hold on
scatter(X_w(:),Y_w(:),'b','.') %workspace 
scatter(X_t(:),Y_t(:),'m','o') %training points
scatter(X_v(:),Y_v(:),'b','.') %validation points
legend('workspace','training points','validation points')
hold off