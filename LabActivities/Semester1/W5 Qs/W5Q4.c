/*This is a program to check if an integer is evenly divisible by another
Author: Jack Levins
Date Created/Rev: 14/10/2019
*/
#include <stdio.h>;
int main()

{

	int num1;
	int num2;
    float remainder;

	printf(" This programs checks if the first integer you enter is evenly divisible by the second \n ");
	
	printf("Enter your first integer \n ");
	scanf("%d", &num1);
	
	printf("Enter your second integer \n ");
	scanf("%d", &num2);
	flushall();
	
    remainder=(num1%num2);
    
	if(remainder==0)
	{
		printf("Integer one is evenly divisible by integer two \n ");
	}   // end if
	else
	{
		printf("Integer one is not evenly divisible by integer two \n ");
	}   //end else

	getchar();
	return 0;
	
}	//end main