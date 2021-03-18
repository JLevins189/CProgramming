/*This is a program to check if an integer is evenly divisible by another
Author: Jack Levins
Date Created/Rev: 14/10/2019
*/
#include <stdio.h>;
int main()

{

	float side1;
	float side2;
	float side3;
	
	printf("Enter the size of side 1    \n");
	scanf("%f", &side1);
	
	printf("Enter the size of side 2    \n");
	scanf("%f", &side2);
	
	printf("Enter the size of side 3    \n");
	scanf("%f", &side3);
	flushall();
	
	
	if((side1+side2)>side3)
	{
		printf("These sides form a vailid triangle");
	}	//end if
	else if((side1+side3)>side2)
    {
		printf("These sides form a vailid triangle");
    }	
	else if((side2+side3)>side1)
	{
		printf("These sides form a vailid triangle");
	}	//end else if (nested x2)
	else
	{
		printf("Invailid triangle");
	} //end if...else block

	getchar();
	return 0;
	
}	//end main	
		
	