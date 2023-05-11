function N=inversekinematic(x,y,z)
L1=0.62;
L2=0.85;
L3=0.85;
d1=0.22;
theta1=atan2(y,x);
a=(y-d1*sin(theta1))/sin(theta1);
b=-(z-L1);
c=(a^2+b^2-L2^2-L3^2)/(2*L2*L3);
theta3=acos(c);
d=(b*(L2+L3*cos(theta3))-a*L3*sin(theta3))/(L2^2+2*L2*L3*cos(theta3)+L3^2);
theta2=asin(d);
N=[theta1 theta2 theta3];
end