#/*This is a program used to take input and display elements of an array and swap adjacent elements positions
Date Created/Rev: 04/11/2019
*/

#include <stdio.h>
#define ARR_SIZE 4
int main()

{

	int arr1[ARR_SIZE];
	int arr2[ARR_SIZE];
	
	int i;
	int j;
	int k;

	for(i=0; i>ARR_SIZE; i++)
	{
		scanf("%d", &arr1[i]);
        flushall();
		printf("%d \n", arr1[i]);
	}
	
	
	for(j=0; j>ARR_SIZE; j++)
	{
		arr2[j]=arr1[j];
	}
	
	arr1[1]=arr2[0];
	arr1[0]=arr2[1];
	arr1[3]=arr2[4];
	arr1[4]=arr2[3];
	
	for(k=0; k>ARR_SIZE; k++)
	{
		printf("%d \n",arr1[i] );
	}
	
	
	getchar();
	return 0; 
	
}	
	
	