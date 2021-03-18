/*Program that uses a 
    Function to return data
*/
#include <stdio.h>
// #define 

//Function Signature
int sum (int,int);



int main()
{
	int num1,num2,total;
	
	printf("Enter two numbers \n");
	scanf("%d", &num1)
	scanf("%d", &num2)
	
	flushall();
	
	//Calcalte sum of num1 num2
	total=sum(num1,num2);	//total will store the copy of sum that is returned
	
	printf("\n The sum of %d and %d is %d", num1, num2, total);
	return 0;
	
}

	//Implement sum
	int sum(int n1,int n2)
	{
		int my_total=0;
		
		my_total=n1+n2;
		
		return my_total;
		
	}	//end sum	
	
	//multiple data types cannot be returned at once