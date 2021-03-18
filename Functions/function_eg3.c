/*Program that uses a 
    Function
*/
#include <stdio.h>
// #define NUMBER 5

//Function Signature
void stars (int,char);



int main()
{
	int number;
	char my_char;
	
	printf("How many rows to display \n");
	scanf("%d", &number);
	
	printf("\n Enter character to display \n");
	scanf("%c", &my_char);	
	
	//Call stars
	stars(number,my_char);
	
	/*Implement function 
   stars()*/
   
   getchar();
   return 0;
  
}

  
   void stars(int n1, char ch)
   {
	   int i;
	   for(i=0;i<n1;i++)
	   {
			printf("%c",ch);
	   }	//end for
   }	//end stars