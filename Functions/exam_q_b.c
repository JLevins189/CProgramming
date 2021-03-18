//Program to swap 2 numbers
#include <stdio.h>


void swap(int*, int*);

int main()
{
	int num1=27;
	int num2=4;

	
	//Swap numbers
	swap(&num1,&num2);
	
	
	printf("Numbers in asceding order are %d and %d \n", num1, num2);

	return 0;
}

void swap(int ptr1,int ptr2)
{
	int temp;
	
	if(*ptr1<*ptr2)
	{
		*ptr1=temp;
		*ptr1=*ptr2;
		*ptr2=temp;
	}	///end if
	
}	//end swap()