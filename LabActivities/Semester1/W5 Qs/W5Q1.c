/*This is a program to display if a character entered is a vowel or not
Author: Jack Levins
Date Created/Rev: 14/10/2019
*/
#include <stdio.h>;
int main()

{

	char inpuut;
// user input variable
	
	
	printf("Enter any vowel \n");
	scanf("%1s", &inpuut);
    flushall();
	
	switch(inpuut)
	{
	
		case 'a':
		{
			printf("The character you entered is a vowel \n");
			break;
		}	//end case
		case 'e':
		{
			printf("The character you entered is a vowel \n");
			break;
		}	//end case
		case 'i':
		{
			printf("The character you entered is a vowel \n");
			break;
		}
		case'o':
		{
			printf("The character you entered is a vowel \n");
			break;
		}	//end case
		case 'u':
		{
			printf("The character you entered is a vowel \n");
			break;
		}	//end case
		default:
		{
			printf("The character you entered is not a vowel \n");
		}	//end default
		
	}	//end switch


	getchar();
	return 0;
	
}	//end main
		
		