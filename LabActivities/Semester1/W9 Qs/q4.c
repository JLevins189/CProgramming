/*
This a question on arrays to read an array and show the result of multiplying corresponding elements
Author: Jack Levins
Student Number: C19335843
Compiler:Borland
Date Revision: 11/11/2019
*/

#include <stdio.h>
#define ARR_SIZE 5
int main()

{	//start main

	int a[ARR_SIZE];
	int b[ARR_SIZE];	
	int i;
	
	printf("Enter 5 numbers into array a \n \n");
	
	//Enter data array a
	for(i=0; i<ARR_SIZE; i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	printf("Enter 5 numbers into array b \n \n");
	
	//Enter data array b
	for(i=0; i<ARR_SIZE; i++)
	{
		scanf("%d",&b[i]);
        flushall();
	}
    
	printf("\n The corresponding elements multiply to give \n \n");
    
	for(i=0; i<ARR_SIZE; i++)
	{
		printf("%d \n", (a[i]*b[i]));
	}
	
	getchar();
	return 0;
	
}	
			