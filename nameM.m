clc
M1=linepoint([0.4 0.8 0.62],[0.4 1 0.62])
M2=linepoint([0.4 1 0.62],[0.5 0.8 0.62])
M3=linepoint([0.5 0.8 0.62],[0.6 1 0.62])
M4=linepoint([0.6 1 0.62],[0.6 0.8 0.62])
T=0;
for i=1:4003
    t=(10/4003)*i;
    T=[T t];
end
U=[M1;M2;M3;M4];
input=[T',U]