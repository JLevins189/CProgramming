/*This is a program to show 2 characters entered using getchar and putchar.
Author: Jack Levins
Date Created/Rev: 07/10/2019
*/
#include <stdio.h>;
int main()

{	char char1, char2;
	
	printf("Enter a character \n ");
	
	char1=getchar();
	putchar(char1);
	
	printf("Enter another character \n ");
	
	char2=getchar();
	putchar(char2);
	
	getchar();
	return 0;
	
}	