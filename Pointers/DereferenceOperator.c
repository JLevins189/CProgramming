/*Program to demonstrate
  the dereference operator*/

#include <stdio.h>
int main()
{
	int var;
	int *ptr;

	var=1;
	ptr=&var;

	printf("ptr contains %p \n", ptr);
	printf(" *ptr contains %d", *ptr);
	
	getchar();
	return 0;

}
