/*This is a program to display marraige status
Author: Jack Levins
Date Created/Rev: 14/10/2019
*/
#include <stdio.h>;
int main()

{

	char wedding_status;
	
	printf("Enter S if you are single \n ");
	printf("Enter M if you are married \n ");
	printf("Enter W if you are widowed \n ");
	printf("Enter E if you are seperated \n ");
	printf("Enter D if you are divorced \n ");
	scanf("%1s", &wedding_status);
	flushall();
	
	
	switch(wedding_status)
	{
		case 'S':
		{
			printf("Your marraige status is single ");
		}	//end case
		case 'M':
		{
			printf("Your marraige status is married ");
		}		//end case	
		case 'W':
		{
			printf("Your marraige status is widowed ");
		}	//end case
		case 'E':
		{
			printf("Your marraige status is seperated ");
		}	//end case
		case 'D':
		{
			printf("Your marraige status is divorced ");
		}	//end case
		default:
		{
			printf("Error: Invailid code");
		}	//end default
	}	//end switch

		getchar();
		return 0;
}	//end main	