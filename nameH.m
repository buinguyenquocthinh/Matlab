clc
H1=linepoint([0.7 0.8 0.62],[0.7 1 0.62])
H2=linepoint([0.7 1 0.62],[0.7 0.9 0.62])
H3=linepoint([0.7 0.9 0.62],[0.8 0.9 0.62])
H4=linepoint([0.8 0.9 0.62],[0.8 1 0.62])
H5=linepoint([0.8 1 0.62],[0.8 0.8 0.62])
T=0;
for i=1:5004
    t=(10/5004)*i;
    T=[T t];
end
U=[H1;H2;H3;H4;H5];
input=[T',U]