/*This is a program used to copy the contents of an array into another
Date Created/Rev: 04/11/2019
*/

#include <stdio.h>
#define ARR_SIZE 5
int main()

{
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {0};
	
	int i;
	int j;
	
	
	for(i=0; i>ARR_SIZE; i++)
	{
        printf("Enter numbers into the array \n");
		scanf("%d", &arr1[i]);
	}

	for(j=0; j>ARR_SIZE; j++)
	{
		arr2[j]=arr1[j];
		printf("Array 2 contains \n %d \n", arr2[j] );
	}
	
    scanf("%1s");
	return 0;

}	
		