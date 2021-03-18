/*Program that uses a 
    Function
*/
#include <stdio.h>
#define NUMBER 5

//Function Signature
void stars(void);	//void in front of stars represents return data type
					//void means the function will not return data
					//2nd void = parameter list



int main()
{
	printf("Before function call \n");
	
	//Call stars()
	stars();
	printf("After function call \n");
	return 0;
	
}	//end main


/*Implement function 
   stars()*/
   void stars()
   {
	   int i;
	   for(i=0;i<NUMBER;i++)
	   {
			printf("*");
	   }	//end for
   }	//end stars