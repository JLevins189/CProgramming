/* Program that uses 
    dynamic memory allocation with arrays
	to find sum of arrays
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 1

int main()
{
	int no_of_nums;
	int i;
	int sum;
    int no_of_bytes;
	int array1[SIZE];
	int *ptr;
	
	ptr=array1;
	
	printf("Enter the number of numbers \n");
	scanf("%d", &no_of_nums);
	no_of_nums=no_of_nums-SIZE;
	
	//Calculate the number of bytes required for the block
	no_of_bytes = no_of_nums*sizeof(int);

	//Allocate memory required
	ptr = (int*)malloc(no_of_bytes);
	
	//Check if memory allocated successfully
	if(ptr==NULL)
	{
		printf("Memory allocation failed... \n");
	}	//end if
	else
	{
		//Enter data into memory block
		for(i=0; i<no_of_nums; i++)
		{
			scanf("%d", &*(ptr+i));
            flushall();
		}	//end for

		//Display data of memory block
		for(i=0; i<no_of_nums; i++)
		{
			printf("%d \n", *(ptr+i));
		}	//end for
		
		//Find the sum
		sum=*(array1+0);
		for(i=1;i<no_of_nums;i++)
		{
			sum=sum+*(array1+i);
		}	
		//Display sum
		printf("The sum of elements in the array is %d \n", sum);
		
		//Release  memory block
		free(ptr);
		
	} //end else

		
	getchar();
	return 0;
	
}	//end main

	
	

	


	