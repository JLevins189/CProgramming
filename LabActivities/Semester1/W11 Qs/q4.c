/* Program to display the address
    of variables and pointers*/

#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int sum;
	
	int *ptr1;
	int *ptr2;
	int *ptr3;
	
	//Enter values into nums
	printf("Enter a number into num1 \n");
	scanf("%d", &num1);
	
	printf("Enter a number into num2 \n");
	scanf("%d", &num2);
    flushall();
	
	ptr1=&num1;
	ptr2=&num2;
	
	sum=(*(ptr1))+(*(ptr2));
	ptr3=&sum;
	
	printf("The sum of num1 and num2 is %d \n",*(ptr3));
	
	getchar();
	return 0;
	
}	
	
	
	