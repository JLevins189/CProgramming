/*Passing a 2D array
   as a parameter
*/

//Remember SYMBOLIC NAMES ARE GLOBAL

#include <stdio.h>

//Function signature
int fxn([ ][2])	//column length must be specified for functions, not rows

int main()
{
	int arr[3][2]={1,2,
				   3,4,
				   5,6
				  };
	int total=0;
		
	//Calculate sum of array
	total=fxn(arr);
	printf("\n Total is %d", total);
		
	getchar();
	return 0;

}	//end main()

/* This function will calculate the sum
of a 2D array with 2 columns*/
int fxn(int my_array[ ][2];
{
	int i,j;
	int sum=0;
	
	for (i=0;i<3;i++)
	{
		forj=0;j<2;i++)
		{
			sum=sum+my_array[i][j];
		}  //end inner for
		
	}  //end outer for	
	return sum;
	
}  //end fxn	

		

		
					  