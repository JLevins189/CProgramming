//Return a value from a function to get average of 3 numbers
#include <stdio.h>

//Function signature
int average(int,int,int);	

int main()
{
	int num1,num2,num3;
	float average_num;
	
	//Num1
	printf("Enter a number \n");
	scanf("%d", &num1);
	
	//Num2
	printf("Enter a 2nd number \n");
	scanf("%d", &num2);
	
	//Num3
	printf("Enter a 3rd number \n");
	scanf("%d", &num3);
	flushall();
    
	//Use average function and assign to variable
	average_num=average(num1,num2,num3);
	
	//Display average
	printf("The average of the 3 numbers is %f \n", average_num);


	getchar();
	return 0;
	
}	//end main



//Calculate and return average of numbers entered
int average(int n1,int n2,int n3)
{
	int sum;
	float avg;
	
	sum=n1+n2+n3;
	avg=sum/3;
	
	return avg;

}	

	