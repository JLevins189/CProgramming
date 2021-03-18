/*This is a program to  a)enter in values for each element in the array
						b)Calculate and display the sum of row 0, row 1, and row 2separately.
						c)Calculate and display the sum of column 0and column 1separately.
						d)Find the highest number in the array and displa
Author: Jack Levins
Date Created/Rev: 18/11/2019
*/
#include <stdio.h>;
#define COL 3
#define ROW 2
int main()

{
	int array1[ROW][COL];
	int i,j;
	
	int sum1=0;
	int sum2=0;
	int sum3=0;
	int sum4=0;
	int sum5=0;
	int max=array1[0][0];
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL; j++)
		{
			scanf("%d", &array1[i][j]);
            flushall();
		} //end inner for
	} //end outer for	

	//Row0 Sum
	for(j=0;j<COL;j++)
	{
		sum1=(sum1+array1[0][j] );
	} //end for		
	
	//Row1 Sum
	for(j=0;j<COL;j++)
	{
		sum2=(sum2+array1[1][j] );
	} //end for		

	//Row2 Sum
	for(j=0;j<COL;j++)
	{
		sum3=(sum3+array1[2][j] );
	}  //end for		
	
	//Sum of rows display
	printf(" The sum of Row 0 is %d \n The sum of Row 1 is %d \n The sum of Row2 is %d \n \n", sum1,sum2,sum3);
	
	
	//Column0 Sum
	for(i=0;i<ROW;i++)
	{
		sum4=(sum4+array1[i][0] );
	} //end for			
	
	//Column1 Sum
	for(i=0;i<ROW;i++)
	{
		sum5=(sum5+array1[i][1] );
	} //end for		

	//Column Sum display
	printf(" The sum of Column0 is %d \n The sum of Column1 is %d \n \n", sum4,sum5);
	
	//Highest number
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL; j++)
		{
			if(max<array1[i][j])
			{
				max=array1[i][j];
			}	
		} //end inner for
	} //end outer for	
	
	//Display Max number
	printf("The largest number in the array is %d \n",max);
	
	getchar();
	return 0;
	
} //end main	