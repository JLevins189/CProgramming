/*Pass by value 
using functions*/

#include <stdio.h>

//Function Signature
void fxn (int);
int main()
{
	int num=1;
	printf("num1 contains %d \n", num);
	
	//Call fxnfxn()
	fxn(num);
	printf("\n num1 contains &d, num", num);
	return 0;
	
} //end main


//Implement fxn()
void fxn(int n1)
{	
	printf("\n n1 contains %d \n", n1);
	n1++;
	printf("\n n1 contains %d \n",n1);
} //end fxn	