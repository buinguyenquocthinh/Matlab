L1=0.62;
L2=0.85;
L3=0.85;
d1=0.22;
m=-1;
n=2/1000;
x=sin(m)*cos(m)*log(abs(m))+0.5;
y=sqrt(abs(m))*cos(m)+0.1;
z=0.62;
X=x;
Y=y;
theta1=0
theta2=0;
theta3=0;
theta1=atan2(y,x);
a=(y-d1*sin(theta1))/sin(theta1);
b=-(z-L1);
c=(a^2+b^2-L2^2-L3^2)/(2*L2*L3);
theta3=acos(c);
d=(b*(L2+L3*cos(theta3))-a*L3*sin(theta3))/(L2^2+2*L2*L3*cos(theta3)+L3^2);
theta2=asin(d);
T=0;
G1=theta1;
G2=theta2;
G3=theta3;
for i=1:1000
    if(i==500)
        a1=sin(m+n*(i-1))*cos(m+n*(i-1))*log(abs(m+n*(i-1)))+0.5;
        b1=sqrt(abs(m+n*(i-1)))*cos(m+n*(i-1))+0.1; 
        a2=sin(m+n*(i+1))*cos(m+n*(i+1))*log(abs(m+n*(i+1)))+0.5;
        b2=sqrt(abs(m+n*(i+1)))*cos(m+n*(i+1))+0.1; 
        x=(a1+a2)/2
        y=(b1+b2)/2
    else
        x=sin(m+n*i)*cos(m+n*i)*log(abs(m+n*i+0.001))+0.5;
        y=sqrt(abs(m+n*i))*cos(m+n*i)+0.1;
    end
    z=0.62
    X=[X x];
    Y=[Y y];
    theta1=atan2(y,x);
    a=(y-d1*sin(theta1))/sin(theta1);
    b=-(z-L1);
    c=(a^2+b^2-L2^2-L3^2)/(2*L2*L3);
    theta3=acos(c);
    d=(b*(L2+L3*cos(theta3))-a*L3*sin(theta3))/(L2^2+2*L2*L3*cos(theta3)+L3^2);
    theta2=asin(d);
    t=0.12*i;
    T=[T t];
    G1=[G1 theta1];
    G2=[G2 theta2];
    G3=[G3 theta3];
end
input=[T' G1' G2' G3']