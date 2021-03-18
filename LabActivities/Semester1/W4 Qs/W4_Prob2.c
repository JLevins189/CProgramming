/*This is a program to show 2 characters entered.
Author: Jack Levins
Date Created/Rev: 07/10/2019
*/
#include <stdio.h>;
int main()

{
	char char1, char2;
	
	printf("Enter a character\n");
	scanf("%c", &char1);
	
	printf("Enter another character \n");
	scanf("%c", &char2);
    flushall();
    
	printf("You entered the characters %c and %c", char1, char2);
	
	getchar();
	return 0;
	
}	