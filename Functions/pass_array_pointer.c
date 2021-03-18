/*Passing an array to a function
*/
//**Pointer notation**//
#include <stdio.h>
#define SIZE 5

//Function Signature
//int find_sum(int[]);
int find_sum(int*);

int main()
{
	int arr[SIZE]={1,2,3,4,5};
	int total=0;
	
	printf("Calculating the sum of the array... \n");
	
	//Calculate array sum
	total=find_sum(arr);
	
	printf("The total of the array is %d \n", total);
	
	getchar();
	return 0;

}	//end main

//Implement find_sum()
//int find_sum(int my_array[])
int find_sum(int* ptr)
{
	int sum=0;
	int i;
	
	for(i=0;i<SIZE;i++)
	{
		//sum=sum+ptr[i];
		sum=sum+*(ptr+i);
	}

	return(sum);
	
}	//end sum()	