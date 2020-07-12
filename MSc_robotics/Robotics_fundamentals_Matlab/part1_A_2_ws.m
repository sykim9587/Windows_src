syms q1s q2s q3s q4s q5s

l1 = 7 ;
l2 = 0;
l3 = 9.5;
l4 = 10.5;
l5 = 4;
l6 = 4;

c1 = cos(q1s);
c2 = cos(q2s);
c3 = cos(q3s);
c4 = cos(q4s);
c5 = cos(q5s);
s1 = sin(q1s);
s2 = sin(q2s);
s3 = sin(q3s);
s4 = sin(q4s);
s5 = sin(q5s);


T1 = [c1 -s1 0 0;s1 c1 0 0; 0 0 1 l1; 0 0 0 1];
T2 = [c2 -s2 0 0;0 0 -1 0; s2 c2 0 0; 0 0 0 1];
T3 = [c3 -s3 0 l3;s3 c3 0 0; 0 0 1 0; 0 0 0 1];
T4 = [c4 -s4 0 l4;s4 c4 0 0; 0 0 1 0; 0 0 0 1];
T5 = [c5 -s5 0 0;0 0 1 l5; -s5 -c5 0 0; 0 0 0 1];
T6 = [1 0 0 0;0 1 0 0; 0 0 1 l6; 0 0 0 1];

FK = T1*T2*T3*T4*T5*T6;




% Workspace
q1s = -pi/2:pi/180:pi/180*100;
q2s = 0:pi/180:3/4*pi;
q3s = -pi:pi/180:0;
q4s = -pi:pi/180:pi/12;
q5s = -pi/18:pi/180:pi;

figure (1)


step = 15;
for i = 1:step:190	
    for j = 1:step:135   
        for k =1:step:180 
            for l =1:step:195
    
                    q1=q1s(1,i);
                    q2=q2s(1,j);
                    q3=q3s(1,k);
                    q4=q4s(1,l);
                    
                    xposition = (cos(q1)*(21*cos(q2 + q3) - 16*sin(q2 + q3 + q4) + 19*cos(q2)))/2;
                    yposition = (sin(q1)*(21*cos(q2 + q3) - 16*sin(q2 + q3 + q4) + 19*cos (q2)))/2;
                    zposition = 8*cos(q2 + q3 + q4) + (21*sin(q2 + q3))/2 + (19*sin(q2))/2 + 7;
                  
                    scatter3(xposition,yposition,zposition);hold on
                    
            end
        end
    end
end

hold off
