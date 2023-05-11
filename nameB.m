clc
B1=linepoint([0.9 0.8 0.62],[0.9 1 0.62])
B2=circlepoint([0.9 1 0.62],[0.9 0.9 0.62])
B3=circlepoint([0.9 0.9 0.62],[0.9 0.8 0.62])
T=0;
for i=1:3002
    t=(10/3002)*i;
    T=[T t];
end
U=[B1;B2;B3];
input=[T',U]