//Return a value from a function to get highest value
#include <stdio.h>

//Function signature
int highest_val(int,int,int);	

int main()
{
	int num1,num2,num3;
	int highest_value;
	
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
	highest_value=highest_val(num1,num2,num3);
	
	//Display average
	printf("The highest value of the 3 numbers is %d \n", highest_value);
	

	getchar();
	return 0;
	
}	//end main	




int highest_val(int n1,int n2,int n3)
{
	
	int high=0;
	
	//Find high
	if(n1>n2 && n1>n3)
	{
		high=n1;
	}	//end if
	else if(n2>n1 && n2>n3)
    {
		high=n2;
    }	//end inner if
    else
    {
        high=n3;
    }	//end else
	
	
	return(high);
   

}	//end highest_val

