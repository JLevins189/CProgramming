/* Program to display the address
    of variables and pointers*/

#include <stdio.h>
int main()
{
	int num1;
	char char1;
	int *ptr1;
	char *ptr2;
	
	num1=2;
	char1='h';
	
	ptr1=&num1;
	ptr2=&char1;
	
	//a)
	
	//Display contents of ptr1
	printf("%d ...  %p \n",num1, &num1);

	//Display contents of ptr1
	printf("%c ... %p \n",char1 &char1);
	
	// b)
	
	//Display contents of ptr1 and ptr2
	printf("%p \n", ptr1);
	printf("%p \n", ptr2);

	// c)
	
	printf("%d \n", &ptr1);
	printf("%c \n", &ptr2);	
	
	getchar();
	return 0;
	
}	
	