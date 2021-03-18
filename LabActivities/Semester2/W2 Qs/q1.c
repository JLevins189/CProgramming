/*Program that uses a 
    Function
*/
#include <stdio.h>
#define STAR 10

//Function Signature
void stars(void);	

int main()
{
	stars();
	getchar();
    return 0;
	
}

/*Implement function 
   stars()*/
void stars()
{
   int i;
   for(i=0;i<STAR;i++)
   {
		printf("*");
   }	//end for

}	//end stars
	
