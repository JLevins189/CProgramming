/* Program that uses calloc for
    dynamic memory allocation*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int no_of_nums;
	int i;
	int high_low;
	
	printf("Enter the numberof numbers \n");
	scanf("%d", no_of_nums);
	
	//Allocate Memory
	ptr=(int*)calloc(no_of_nums, sizeof(int) );
	
	if(ptr=NULL)
	{
		printf("failed to allocate memory \n");
		return 0;
	}
	else
	{
		//Enter data into memory block
		for(i=0; i<no_of_nums; I++)
		{
			scanf("%d", &*(ptr+i);
		}	//end for
		
		
	