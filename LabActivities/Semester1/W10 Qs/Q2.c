/*This is a program to multiply corresponding elements in an array and store them in a 3rd array
Author: Jack Levins
Date Created/Rev: 18/11/2019
*/
#include <stdio.h>;
#define ROW 6
#define COL 4
int main()

{

	int data[ROW][COL]= { {3, 2, 5, 7, 4, 2
                        1, 4, 4, 8, 13, 1 
                        9, 1, 0, 2, , 
                        0, 2, 6, 3, -1, -8
                        };  
	int i,j;
	int sum=0;
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			sum=(sum+data[i][j] );
		} //end inner for
	} //end outer for

	printf("All the elements in the array add up to %d \n", sum);
	
	getchar();
	return 0;
	
} //end main	
		
		