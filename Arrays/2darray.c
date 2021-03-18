/* Reading and Writing to a 
    2-D array*/

#include <stdio.h>
#define ROW 4
#define COL 3

int main()
{
	int matrix[ROW][COL];
	int i,j;
	




	//Enter data into array
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)	//(will move across then start of next line) 
		{
			scanf("%d",&matrix[i][j]);
			printf("%d, %d", i,j);
		}	//end inner for
	
	}	//end outer for
	
	getchar();
	return 0;
}
