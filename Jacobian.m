syms theta1 theta2 theta3
L1=0.62;
L2=0.85;
L3=0.85;
d1=0.22;
A=[-sin(theta1)*(L3*cos(theta2+theta3)+L2*cos(theta2)+d1) -cos(theta1)*(L3*sin(theta2+theta3)+L2*sin(theta2)) -L3*cos(theta1)*sin(theta2+theta3);
    -cos(theta1)*(L3*cos(theta2+theta3)+L2*cos(theta2)+d1) -sin(theta1)*(L3*sin(theta2+theta3)+L2*sin(theta2)) -L3*sin(theta1)*sin(theta2+theta3);
    0                                                       -L3*cos(theta2+theta3)*diff(theta2)-L2*cos(theta2)  -L3*cos(theta2+theta3)        ]
