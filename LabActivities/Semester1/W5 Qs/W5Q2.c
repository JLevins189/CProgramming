/*This is a program to display if a integer (1-100) entered is odd or even
Author: Jack Levins
Date Created/Rev: 14/10/2019
*/
#include <stdio.h>;
int main()

{

	int num1;
	
	
	printf(" Enter an integer between 1 and 100 \n ");
	scanf("%d", &num1);
	flushall();
	
	
	if(num1%2==0)
	{
		printf(" The number you entered is even \n ");
	}	
	else
	{
		if(num1%2==1)
		{
			printf("The number you enetered is odd \n ");
		} //end nested if

	}
	getchar();	
	return 0;
	
}	//end main