/*Program that uses a 
    Function
*/
#include <stdio.h>
// #define NUMBER 5

//Function Signature
//void stars(void);	//void in front of stars represents return data type
					//void means the function will not return data
					//2nd void = parameter list
void stars(int);


int main()
{
	int number;
	printf("How many numbers to display \n");
	scanf("%d", &number);
	flushall();
	
	printf("Before function call \n");
	
	//Call stars()
	stars(number);
	printf("After function call \n");
	
    getchar();
    return 0;
	
}	//end main


/*Implement function 
   stars()*/
   
   void stars(int n1)
   {
	   int i;
	   for(i=0;i<n1;i++)
	   {
			printf("*");
	   }	//end for
   }	//end stars