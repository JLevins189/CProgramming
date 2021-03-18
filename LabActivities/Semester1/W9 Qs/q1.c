/*
This a question on arrays to see its contents
Author: Jack Levins
Student Number: C19335843
Compiler:Borland
Date Revision: 11/11/2019
*/

#include <stdio.h>
#define ARR_SIZE 8
int main()

{	//start main

	int a[ARR_SIZE];
	int i;
	
	for (i = 0; i < 10; i++)
	{
		a[i] = 9 -i;
		printf("%d \n", a[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		a[i] = a[ a[i] ];
		printf("%d \n", a[i]);
	}	
	
	getchar();
	return 0;
	
}	