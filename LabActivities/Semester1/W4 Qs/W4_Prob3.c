/*This is a program to show 3 floats correct to certain decimal points
Author: Jack Levins
Date Created/Rev: 07/10/2019
*/
#include <stdio.h>;
int main()

{

	float var1, var2, var3;
	
	printf("Enter any number with more than 4 decimal points \n ");
	scanf("%f" ,&var1);
	
	printf("Enter any number with more than 3 decimal places \n ");
	scanf("%f" , &var2);
	
	printf("Enter any number with a decimal \n \n ");
	scanf("%f", &var3);
	flushall();
	
	printf("You entered %.4f first, correct to 4 decimal places \n", var1);
	printf("You entered %.3f second, correct to 3 decimal places \n", var2);
	printf("You entered %.0f third,(0 decimal points)", var3);
	
	
	getchar();
	return 0;
	
}	
	
	