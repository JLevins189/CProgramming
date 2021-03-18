/*
This a question on 2D arrays to see its contents and find smallest and largest contents, calulate the avg and display it
Author: Jack Levins
Student Number: C19335843
Compiler:Borland
Date Revision: 11/11/2019
*/


#include <stdio.h>
#define ROW 3
#define COL 2
int main()

{	//start main

	int a[ROW][COL];
	int i,j;
	int max=a[0][0];
	int total=0;
	float avg;
	
	
	//Input data to array and display
	
	for(i=0; i<ROW; i++)
	{
		scanf("%d", &a[i][j]);
		printf("%d \n", a[i][j]);
	
		for(j=0; j<COL; j++)
		{
			scanf("%d",&a[i][j]);
            flushall();
			printf("%d", a[i][j]);
		}	//end inner for	
	
	}	//end outer for
	
	printf("\n \n \n");
	
	//finding max value
	for(i=0; i<ROW; i++)
	{
		if (max< a[i][j])
		{
			max=a[i][j];
		}	//end if
	
		for(j=0; j<COL; j++)
		{
			if (max< a[i][j])
			{
				max=a[i][j];
			}	//end if
		}	//end inner for	
		
    }    
        printf("Max value is %d \n \n \n", max);
		
		
		
		//finding average
	for(i=0; i<ROW; i++)
	{
		total=total+a[i][j];
	
		for(j=0; j<COL; j++)
		{
			total=total+a[i][j];
		}	//end inner for	
	
	}	//end outer for
	
	printf("Total is %d \n", total);
	
	avg=total/(COL*ROW);
	printf("Average is %f \n", avg);
	
	getchar();
	return 0;
	
}	