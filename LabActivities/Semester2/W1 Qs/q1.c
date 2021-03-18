/* Program that uses 
    dynamic memory allocation with wrong size of data*/

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
	
	//Calculate the number of bytes required for the block
	no_of_bytes = no_of_nums*3;

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
			printf("Enter numbers into mem block \n");
			scanf("%d", &*(ptr+i));
            flushall();
		}	//end for

		//Display data of memory block
		for(i=0; i<no_of_nums; i++)
		{
			printf("Diplaying numbers... \n");
			printf("%d \n", *(ptr+i));
		}	//end for
		
		//Release  memory block
		free(ptr);
		
	} //end else

		
	getchar();
	return 0;
	
}	//end main

	
	

