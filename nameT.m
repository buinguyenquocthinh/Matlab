clc
%chu T
T1=linepoint([0.1 1 0.62],[0.3 1 0.62])
E=linepoint([0.3 1 0.62],[0.2 1 0.62])
T2=linepoint([0.2 1 0.62],[0.2 0.8 0.62])
T=0;
for i=1:3002
    t=(10/3002)*i;
    T=[T t];
end
U=[T1;E;T2];
input=[T',U]