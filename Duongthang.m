clc
syms theta1 theta2 theta3 G1 G2 G3
L1=0.62;
L2=0.85;
L3=0.85;
d1=0.22;
T=0;
for i=0:500
    x=-1+0.004*i;
    y=1;
    z=1;
    theta1=atan2(y,x);
    a=(y-d1*sin(theta1))/sin(theta1);
    b=-(z-L1);
    c=(a^2+b^2-L2^2-L3^2)/(2*L2*L3);
    theta3=acos(c);
    d=(b*(L2+L3*cos(theta3))-a*L3*sin(theta3))/(L2^2+2*L2*L3*cos(theta3)+L3^2);
    theta2=asin(d);
    t=0.004*i;
    T=[T t];
    G1=[G1 theta1];
    G2=[G2 theta2];
    G3=[G3 theta3];
end
input=[T' G1' G2' G3']
    
