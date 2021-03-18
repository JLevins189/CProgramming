/* Program to display the address
    of variables and pointers*/

#include <stdio.h>
int main()
{
	float input1=1.1;
	float input2=2.2;
	
	float *ptr1;
	float *ptr2;
	
	
	//a)
	printf("%p \n %p \n", &input1, &input2);
	printf("%p \n %p \n", &ptr1, &ptr2);
	
	//b)
	ptr1=&input1;
	ptr2=&input2;
	
	//c)
	printf("%f \n",*ptr1);
	printf("%f \n",*ptr2);

	//d)
	printf("%f \n",*(&ptr1) );
	printf("%f \n",*(&ptr2) );
	
	getchar();
	return 0;
	
}	
	