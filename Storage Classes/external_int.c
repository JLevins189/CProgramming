#include <stdio.h>

//Function Signature
void fxn (void);
int main()
{

	printf("Inside main \n");
	fxn();
	return 0;
	
}

void fxn()
{
	extern int num=0;
	printf("\n Inside fxn \n");
	num++;
	printf("\n num is %d", num);
	
}	