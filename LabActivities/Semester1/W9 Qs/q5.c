/*
This a question on 2D arrays to see its contents and find numbers below 0 and display them
Author: Jack Levins
Student Number: C19335843
Compiler:Borland
Date Revision: 11/11/2019
*/


#include <stdio.h>
#define ROW 4
#define COL 5
int main()

{	//start main

	int a[ROW][COL];
	int i,j;
	
	printf("Enter data into the array row by row \n \n");
	
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
			scanf("%d",&a[i][j]);
            flushall();
		}	//end inner for	
	
	}	//end outer for
	
	
	//Display values less than 0
	for(i=0; i<ROW; i++)
	{
		if (a[i][j]<0)
		{
			printf("%d \n on row %d and column %d", a[i][j], i, j);
		}	//end if
		
		for(j=0; j<COL; j++)
		{
			if (a[i][j]<0)
			{
			printf("%d \n on row %d and column %d", a[i][j], i, j);
			}	//end if
		}	//end inner for	
	
	}	//end outer for
	
	getchar();
	return 0;
	
}	
	
	