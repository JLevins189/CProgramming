/* Program to display the address
    of variables and pointers*/

#include <stdio.h>
#define SIZE 3
int main()
{
	float array1[SIZE];
	float array2[SIZE];	
	int i;
	
	
	//Enter data into array1
	printf("Enter decimal numbers into the array \n");
	for(i=0; i<SIZE; i++)
	{
		scanf("%f", &*(array1+i));
        
        flushall();
	}	
	
	//Copy contents of array1 to array2
	for(i=0; i<SIZE; i++)
	{
		*(array2+i)=*(array1+i);
	}	
	
	//Display contents of both arrays
	//Array1
	for(i=0; i<SIZE; i++)
	{
		printf("%f \n", *(array1+i));
	}	
	
	//Array2
	printf("Array 2... \n");
    for(i=0; i<SIZE; i++)
	{
		printf("%f \n", *(array2+i));
	}	
	
	getchar();
	return 0;
	
}	
	