/*This is a program to show 4 numbers in reverse order
Author: Jack Levins
Date Created/Rev: 07/10/2019
*/
#include <stdio.h>;
int main()

{
	int var1, var2, var3, var4;
	
	printf("Enter a number \n ");
	scanf("%d",&var1);
	
	printf("Enter another number \n ");
	scanf("%d", &var2);
	
	printf("Enter your another number \n ");
	scanf("%d", &var3);

	printf("Enter your final number \n ");
	scanf("%d", &var4);   
	flushall();
	
	printf(" You entered:\n %d\n %d\n %d\n %d\n ", var4, var3, var2, var1);
	
    getchar();
	return 0;
	
}