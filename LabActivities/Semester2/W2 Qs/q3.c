/*Program that uses a 
    Function
*/
#include <stdio.h>


//Function Signature
int highlow(int,int,int);	

int main()
{
	int num1=0;
    int num2=0;
    int num3=0;
	int highest=0;
    int lowest=0;
	
	printf("Enter a value \n");
	scanf("%d",&num1);
	printf("Enter a 2nd value \n");
	scanf("%d",&num2);	
	printf("Enter a 3rd value \n");
	scanf("%d",&num3);	
    flushall();
	
	highest=highlow(num1,num2,num3);
    
    printf("%d", highest);	
    getchar();
	return 0;

}	//end main



/*Implement highlow()
*/
int highlow(int n1,int n2,int n3)
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
   

}	//end highlow



	

