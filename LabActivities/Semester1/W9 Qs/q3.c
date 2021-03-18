/*
This a question on arrays to read + display an array and show it in reverse order
Author: Jack Levins
Student Number: C19335843
Compiler:Borland
Date Revision: 11/11/2019
*/


#include <stdio.h>
#define ARR_SIZE 15
int main()

{	//start main

	int a[ARR_SIZE];
	int i;
	int reverse_a[ARR_SIZE];
	
	
	for(i=0; i<ARR_SIZE; i++)
	{
		scanf("%d",&a[i]);
        flushall();
		printf("%d \n", a[i]);
	}

	for(i=0; i<ARR_SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	
	for(i=0; i<ARR_SIZE; i++)
	{
		reverse_a[ARR_SIZE-i]=a[i];
		printf("%d \n", reverse_a[ARR_SIZE-i]);
	}
	
	getchar();
	return 0;
	
}	
		