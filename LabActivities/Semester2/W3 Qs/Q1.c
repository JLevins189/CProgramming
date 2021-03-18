//Return a value from a function
//Function program to show if a number is odd or even
#include <stdio.h>

//Function signature
int odd_even(int);	

int main()
{
	int num1, output;
	
	
	
	printf("Enter a number to see if it is odd or even \n");
	scanf("%d",&num1);
	flushall();
    output=odd_even(num1);
	
	
	if(output==1)
	{
		printf("the number you entered is even \n");
	}	//end if
	else if(output==0)
	{
		printf("the number you entered is odd \n");
	}	//end else if	
	
	getchar();
	return 0;
	
}	//end main

//Find if number entered is odd or even
int odd_even(int oddeven_num)
{
	int odd_or_even=0;
	odd_or_even=oddeven_num%2;
	
	
	if(odd_or_even==0)
	{
		int even=1;
		return even;
	}	//end if
	else if(odd_or_even==1)
	{
		int odd=0;
		return odd;
	}	//end if else	
}	