theta_1 =0:0.05:2*pi;
theta_2 = 0:0.05:2*pi;
theta_3 =0:0.05:2*pi;
[theta1,theta2,theta3] = meshgrid(theta_1,theta_2,theta_3);
x=0.850*cos(theta1).*cos(theta2+theta3)+0.850*cos(theta1).*cos(theta2)+0.220*cos(theta1);
y=0.850*sin(theta1).*cos(theta2+theta3)+0.850*sin(theta1).*cos(theta2)+0.220*sin(theta1);
z=-0.850*sin(theta2+theta3)-0.850*sin(theta2)+0.620;
plot3(x(:),y(:),z(:),'.','MarkerSize',0.25);
grid on;
grid minor;
axis equal;
xlabel('X','fontsize',10)
ylabel('Z','fontsize',10)
zlabel('Z','fontsize',10)
title('X-Y-Z coordinates for all theta2, theta3 and theta1 combinations at y=0','fontsize',10)
