% Simscape(TM) Multibody(TM) version: 7.3

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(9).translation = [0.0 0.0 0.0];
smiData.RigidTransform(9).angle = 0.0;
smiData.RigidTransform(9).axis = [0.0 0.0 0.0];
smiData.RigidTransform(9).ID = '';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [0 0 210];  % mm
smiData.RigidTransform(1).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(1).axis = [1 0 0];
smiData.RigidTransform(1).ID = 'B[Part1-1:-:Part2-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [-220.00000000000014 409.99999999999989 1.5347723092418164e-12];  % mm
smiData.RigidTransform(2).angle = 2.0943951023931935;  % rad
smiData.RigidTransform(2).axis = [-0.57735026918962506 -0.57735026918962518 -0.57735026918962695];
smiData.RigidTransform(2).ID = 'F[Part1-1:-:Part2-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [0 2.2204460492503131e-13 -82.499999999998366];  % mm
smiData.RigidTransform(3).angle = 5.0209290339087201e-15;  % rad
smiData.RigidTransform(3).axis = [0.69538551834999085 -0.71863689083508264 -1.254553646877471e-15];
smiData.RigidTransform(3).ID = 'B[Part2-1:-:Part3-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [-849.99999999999989 -2.6147972675971687e-12 -82.499999999995396];  % mm
smiData.RigidTransform(4).angle = 4.3263099255061362e-15;  % rad
smiData.RigidTransform(4).axis = [0.8248008254198308 0.56542337976667179 1.0088125616407497e-15];
smiData.RigidTransform(4).ID = 'F[Part2-1:-:Part3-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [-2.2204460492503131e-13 0 -97.499999999999972];  % mm
smiData.RigidTransform(5).angle = 3.4921846874840112e-15;  % rad
smiData.RigidTransform(5).axis = [0 1 0];
smiData.RigidTransform(5).ID = 'B[Part3-1:-:Part9-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [-849.99999999999204 8.2991391536779702e-12 -97.49999999999892];  % mm
smiData.RigidTransform(6).angle = 5.5511151231257827e-16;  % rad
smiData.RigidTransform(6).axis = [0.76408468636159788 0.6451159524207245 1.3681367710190263e-16];
smiData.RigidTransform(6).ID = 'F[Part3-1:-:Part9-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [0 3.3306690738754696e-13 -115.00000000000006];  % mm
smiData.RigidTransform(7).angle = 3.4914813388431318e-15;  % rad
smiData.RigidTransform(7).axis = [1 0 0];
smiData.RigidTransform(7).ID = 'B[Part10-1:-:Part9-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [4.5758952182950452e-12 2.3398172288580099e-11 -115.00000000000709];  % mm
smiData.RigidTransform(8).angle = 3.9130440107231451e-15;  % rad
smiData.RigidTransform(8).axis = [0.46036636816630194 0.88772901668322701 7.9959255444190909e-16];
smiData.RigidTransform(8).ID = 'F[Part10-1:-:Part9-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(9).translation = [0 0 0];  % mm
smiData.RigidTransform(9).angle = 0;  % rad
smiData.RigidTransform(9).axis = [0 0 0];
smiData.RigidTransform(9).ID = 'RootGround[Part1-1]';


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(5).mass = 0.0;
smiData.Solid(5).CoM = [0.0 0.0 0.0];
smiData.Solid(5).MoI = [0.0 0.0 0.0];
smiData.Solid(5).PoI = [0.0 0.0 0.0];
smiData.Solid(5).color = [0.0 0.0 0.0];
smiData.Solid(5).opacity = 0.0;
smiData.Solid(5).ID = '';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 5.6973821970783201;  % kg
smiData.Solid(1).CoM = [175.7351340678066 38.705711171233894 18.603501391409171];  % mm
smiData.Solid(1).MoI = [63518.135452566668 63496.615848070076 67241.72376399998];  % kg*mm^2
smiData.Solid(1).PoI = [13352.959331133326 1895.2680154504101 -6955.7243025788348];  % kg*mm^2
smiData.Solid(1).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = 'Part10*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 57.465317322422059;  % kg
smiData.Solid(2).CoM = [-155.51573420500782 194.69983579233656 58.419628666586526];  % mm
smiData.Solid(2).MoI = [2423250.5578047745 2444205.7393021234 2803426.3539777668];  % kg*mm^2
smiData.Solid(2).PoI = [334403.83947483526 -87515.664502192318 726022.42956565775];  % kg*mm^2
smiData.Solid(2).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = 'Part2*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 36.920167038928547;  % kg
smiData.Solid(3).CoM = [0.06973934675013968 -62.826928051231064 94.797901031257922];  % mm
smiData.Solid(3).MoI = [958348.97546596092 602337.23362326482 1315797.8824571965];  % kg*mm^2
smiData.Solid(3).PoI = [14322.427341112478 137.83078031054518 536.2800911469883];  % kg*mm^2
smiData.Solid(3).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = 'Part1*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 57.756769156694375;  % kg
smiData.Solid(4).CoM = [-506.35135919253969 -5.4053400632444966 -246.7509848486109];  % mm
smiData.Solid(4).MoI = [699343.69547991268 5250995.1383559154 5283059.1650419002];  % kg*mm^2
smiData.Solid(4).PoI = [-13517.276910344377 82852.792611863042 86233.693733459833];  % kg*mm^2
smiData.Solid(4).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(4).opacity = 1;
smiData.Solid(4).ID = 'Part3*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(5).mass = 41.638393307322474;  % kg
smiData.Solid(5).CoM = [-639.66155797724423 -27.480878855130701 2.9510988539408416];  % mm
smiData.Solid(5).MoI = [297342.24191021116 4249801.5172150787 4299201.1547273509];  % kg*mm^2
smiData.Solid(5).PoI = [4392.7388967545003 50482.408664870156 -202217.37878245555];  % kg*mm^2
smiData.Solid(5).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(5).opacity = 1;
smiData.Solid(5).ID = 'Part9*:*Default';


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(4).Rz.Pos = 0.0;
smiData.RevoluteJoint(4).ID = '';

smiData.RevoluteJoint(1).Rz.Pos = -179.93241117634486;  % deg
smiData.RevoluteJoint(1).ID = '[Part1-1:-:Part2-1]';

smiData.RevoluteJoint(2).Rz.Pos = -1.891055812399566;  % deg
smiData.RevoluteJoint(2).ID = '[Part2-1:-:Part3-1]';

smiData.RevoluteJoint(3).Rz.Pos = -6.6089441876003967;  % deg
smiData.RevoluteJoint(3).ID = '[Part3-1:-:Part9-1]';

smiData.RevoluteJoint(4).Rz.Pos = -8.499999999999666;  % deg
smiData.RevoluteJoint(4).ID = '[Part10-1:-:Part9-1]';

