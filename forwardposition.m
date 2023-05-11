function T = forwardposition(theta1,theta2,theta3)
L1=0.62;
L2=0.85;
L3=0.85;
d1=0.22;
x=L3*cos(theta1)*cos(theta3+theta2)+L2*cos(theta1)*cos(theta2)+d1*cos(theta1);
y=L3*sin(theta1)*cos(theta3+theta2)+L2*sin(theta1)*cos(theta2)+d1*sin(theta1);
z=-L3*sin(theta2+theta3)-L2*sin(theta2)+L1;
T=[x,y,z];
end