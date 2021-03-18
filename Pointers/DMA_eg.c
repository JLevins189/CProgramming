/* Program that uses 
    dynamic memory allocation*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int no_of_nums;
	int no_of_bytes;
	int i;
	
	printf("Enter the number of numbers \n");
	scanf("%d", &no_of_nums);
	flushall();
	
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
		}	//end for

		//Display data of memory block
		for(i=0; i<no_of_nums; i++)
		{
			printf("%d \n", *(ptr+i));
		}	//end for
		
		//Release  memory block
		free(ptr);
		
	} //end else

		
	getchar();
	return 0;
	
}	//end main

	
	

