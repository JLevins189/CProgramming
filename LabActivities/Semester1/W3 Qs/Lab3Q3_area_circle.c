/*This is a program to calculate and display the area of circle with radius 4.8cm
Author: Jack Levins
Date Created/Rev: 30/09/2019
*/

#include <stdio.h>;
int main()

{
	float r = 4.8;
	float pi = 3.14;
	float ar;
	
	ar = pi*r;
    ar = ar*r;
	printf("The area of the circle is %f cm\n",ar);
	
    getchar();	
	return 0;

}