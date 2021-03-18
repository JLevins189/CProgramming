/*This is a program to display if a character entered is a vowel or not
Author: Jack Levins
Date Created/Rev: 18/11/2019
*/
#include <stdio.h>;
#define ROW 3
#define COL 4
int main()

{
	int array1[ROW][COL];
	int array2[ROW][COL];
	int array3[ROW][COL];
	
	int i;
	int j;
	
	for(i=0;i<ROW; i++)
	{
		for(j=0;j<COL; j++)
		{
			array3[i][j]=(array1[i][j])*(array2[i][j]);
		} //end inner for
	} //end outer for	
	
	return 0;

} //end main