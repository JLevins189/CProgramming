#/*This is a program used to take input for an array and make an array in reverse order
Date Created/Rev: 04/11/2019
*/
#define ARRSIZE 5
#include <stdio.h>
int main()

{

	int arr1[ARRSIZE];
    int arr2[ARRSIZE];
	int i=0;
	int j;
	
	for(i=0; i<ARRSIZE; i++)
	{
		scanf("%d", &arr1[i]);
		flushall();
		printf("%d \n", arr1[i]);
	}	
	
	for (j=ARRSIZE ;j>0; j--)
	{
		arr2[j]=arr1[i];
		i++;
		printf("%d \n",arr2[j]);
	}	
	
	getchar();
	return 0;
	
}	
