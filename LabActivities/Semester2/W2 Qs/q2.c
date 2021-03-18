/*Program that uses a 
    Function
*/
#include <stdio.h>


//Function Signature
void function1(char,int);	

int main()
{
    char charans=' ';
    int intans=0;
    
    printf("Enter the character you would like to be displayed a set number of times \n");
	scanf("%c", &charans);
	printf("How many times would you like this displayed? \n");
	scanf("%d", &intans);
    flushall();
    
    function1(charans,intans);
	getchar();
    return 0;
}


/*Implement function1()
*/
void function1(char name,int num1)
{
	int i;
    
	
	for(i=0;i<num1;i++)
	{
		printf("%c", name);
	}	//end for
	
}	//end function1