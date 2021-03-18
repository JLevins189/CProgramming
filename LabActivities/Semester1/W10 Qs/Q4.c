/*This is a program to check an error 
Author: Jack Levins
Date Created/Rev: 18/11/2019
*/
#include <stdio.h>;
int main()

{
	int var1;
	int *ptr;
	
	var1 = 1;
	ptr= &var1;
	
	printf("the address of var1 is %d", &var1); 
	// the %d should be %p
	printf("ptr contains %p", ptr);
	//There is a missing & and should be &ptr
	
	getchar();
	return 0;
	
}	