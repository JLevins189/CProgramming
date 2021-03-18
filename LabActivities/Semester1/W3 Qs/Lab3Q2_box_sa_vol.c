/*This is a program to calculate and display the volume and surface area of a box
  with height 10cm, length 11.5cm and width 2.5cm
Author: Jack Levins
Date Created/Rev: 30/09/2019
*/
#include <stdio.h>;
int main()

{

	float h = 10;
	float l = 11.5;
	float w = 2.5;
	float sa;
	float v;
	
	sa = (2*l*w)+(2*l*h)+(2*w*h);
	v = (l*w*h);
	
	printf("Surface Area of said box is %f cm\n", sa);
	printf("Volume of said box is %f cm\n", v);
	
    getchar();
	return 0;

}