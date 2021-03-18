/* Program that uses realloc to
    change dynamic memory allocation*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//pointer=realloc(pointer, new size (total size))
	
	int *ptr;
	int no_of_bytes;
	int no_nums;
	int i;
	
	char answer;
	int new_nums;
	
	printf("Enter the number of numbers \n");
	scanf("%d", &no_nums);
	flushall();
	
	//no_of_bytes calculation
	no_of_bytes=no_nums*sizeof(int);
	
	//Allocate memory block
	ptr=(int*)malloc(no_of_bytes);
	
	//Check if memory allocated successfully
	if(ptr==NULL)
	{
		printf("Memory allocation failed... \n");
		printf("Enter any key to exit \n");
		getchar();
		return 0;
	}	//end if
	else
	{
		//Enter data into memory block
		for(i=0; i<no_of_nums; i++)
		{
			scanf("%d", &*(ptr+i);
		}	//end for

		//Display data of memory block
		for(i=0; i<no_of_nums; i++)
		{
			printf("%d \n", *(ptr+i);
		}	//end for
		
		//Use realloc
		printf("\n Any extra numbers? (y/n) \n");
		scanf("%c", answer);
		if (answer=='n')
		{
			printf("\n OK all data already entered \n");
		} //end if
		else
		{
			//New amount of data
			printf("\n How many extra numbers to enter? \n");
			scanf("%d", &new_nums);
			
			//Calculate size of new block
			no_of_bytes=no_of_bytes+(new_nums*sizeof(int) );
			
			//Change size of block
			ptr=(int*)realloc(ptr, no_of_bytes);
		} //end inner else	
		if(ptr==NULL)
		{
			printf("Memory allocation failed... \n");
			printf("Enter any key to exit \n");
			getchar();
			return 0;
		}	//end if
		else
		{
			//Enter additional numbers
			for(i=no_nums;i<(no_nums+new_nums); i++)
			{
				scanf("%d", &*(ptr+i) );
			}	//end for
		}		//end inner else	
			
		printf("\n Change the size of the block? (y/n) \n");
		scanf("%c", &answer);
		
		if(answer==n)
		{
			printf("\n Block remains the same");
		}
		else
		{
			printf("\n Enter size of the new set \n");
			scanf("%d",&new_nums);
			
			//change size of memory block
			ptr=(int*)realloc(new_nums*sizeofint);
		}	
		free (ptr);
	} //end else

		
	getchar();
	return 0;
	
}	//end main

	
	