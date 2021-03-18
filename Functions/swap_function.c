/*Pass by value 
using functions*/

#include <stdio.h>

//Function Signature
void swap (int*,int*);
int main()
{
	int num1,num2
	num1=5;
	num2=10;
	
	printf("num1 contains %d and num2 contains %d \n", num1,num2);
	
	
	//swap contents of variables
	swap(&num1,&num2);
	printf("num1 contains %d and num2 contains %d \n", num1,num2);
	return 0;
	
} //end main


//Implement swap()
void swap(int* n1,int* n2 )
{	
	int temp;
	tmp=*n1;
	*n1=*n2;
	*n2=temp;
	
	printf("num1 contains %d and num2 contains %d \n", *n1,*n2);
} //end swap