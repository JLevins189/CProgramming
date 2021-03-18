/*This is a program to show 3 numbers entered on seperate lines
Author: Jack Levins
Date Created/Rev: 07/10/2019
*/
#include <stdio.h>;
int main()

{
	int var1, var2, var3;
	
	printf("Enter a number");
	scanf("%d",&var1);
	
	printf("Enter another number");
	scanf("%d", &var2);
	
	printf("Enter your final number");
	scanf("%d", &var3);
    flushall();
	
	printf(" You entered:\n %d\n %d\n %d\n ", var1, var2, var3);
	
    getchar();
	return 0;
	
}