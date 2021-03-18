
#include <stdio.h>
#include <stdlib.h>
#define NO_OF_NUMS 5

int main()
{	//start main

	float var1;
	float var2;
	float var3;
	float var4;
	float var5;
	float sum=0;
	float *ptr1;
	float *ptr2;
	int no_of_bytes;
    int i;
    
    printf("Enter 5 numbers \n");
    scanf("%f", var1);
    scanf("%f", var2);
    scanf("%f", var3);
    scanf("%f", var4);
    scanf("%f", var5);    
    
	//Calculate the number of bytes required for the block
	no_of_bytes = NO_OF_NUMS*sizeof(float);

	//Allocate memory required
	ptr1=(*float)malloc(no_of_bytes);
	
	//Check if memory allocated successfully
	if(ptr1==NULL)
	{
		printf("Memory allocation failed... \n");
	}	//end if
	else
	{
		//Display data of memory block
		for(i=0; i<NO_OF_NUMS; i++)
		{
			sum=sum+*(ptr1+i);
			printf("%f \n", *(ptr1+i));
		}	//end for
		
		//Average
		//Calculate the number of bytes required for the block
		no_of_bytes = NO_OF_NUMS*sizeof(float);

		//Allocate memory required
		ptr2 = (*float)malloc(sizeof(float));
		
		if(ptr1==NULL)
		{
			printf("Memory allocation failed... \n");
		}	//end if
		else
		{
			//Calcuate average
			*(ptr2)=sum/NO_OF_NUMS;
		
			//Display Average
			printf("Average of numbers is %f", *(ptr2));
		
			//Release  memory block
			free(ptr2);
		}	//end inner else
		
		//Release  memory block
		free(ptr1);	
	} //end else

		
	getchar();
	return 0;
	
}	//end main

	
	

	
