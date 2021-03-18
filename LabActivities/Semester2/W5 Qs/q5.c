#include <stdio.h>

int main()
{
	char *p="abcd";
	while(*p)
		putchar(*p++);
	
	getchar();
	return 0;
	
}	