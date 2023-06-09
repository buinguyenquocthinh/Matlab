function M=linepoint(p1,p2)
%input p1 p2
x1=p1(1);
y1=p1(2);
z1=p1(3);
x2=p2(1);
y2=p2(2);
z2=p2(3);
L1=0.62;
L2=0.85;
L3=0.85;
d1=0.22;
theta1=0;
theta2=0;
theta3=0;
theta1=atan2(y1,x1);
a=(y1-d1*sin(theta1))/sin(theta1);
b=-(z1-L1);
c=(a^2+b^2-L2^2-L3^2)/(2*L2*L3);
theta3=acos(c);
d=(b*(L2+L3*cos(theta3))-a*L3*sin(theta3))/(L2^2+2*L2*L3*cos(theta3)+L3^2);
theta2=asin(d);
T=0;
G1=theta1;
G2=theta2;
G3=theta3;
m=(x2-x1)/1000;
k=(y2-y1)/1000;
u=(z2-z1)/1000;
for i=1:1000
    x=x1+m*i;
    y=y1+k*i;
    z=z1+u*i;
    theta1=atan2(y,x);
    a=(y-d1*sin(theta1))/sin(theta1);
    b=-(z-L1);
    c=(a^2+b^2-L2^2-L3^2)/(2*L2*L3);
    theta3=acos(c);
    d=(b*(L2+L3*cos(theta3))-a*L3*sin(theta3))/(L2^2+2*L2*L3*cos(theta3)+L3^2);
    theta2=asin(d);
    t=0.005*i;
    T=[T t];
    G1=[G1 theta1];
    G2=[G2 theta2];
    G3=[G3 theta3];
end
input=[ G1' G2' G3'];
M=input;
end