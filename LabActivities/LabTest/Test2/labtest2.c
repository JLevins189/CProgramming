/* 
	labtest2
	
	Questions given arrays involving copying,modifying and displaying their contents to standard output
	
	Author: Jack Levins
	Student Number: C19335843
	Compiler:Borland
	Date Created: 02/12/2019
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{	//start main'
	
	//Intialise Variables and arrays
	int i;
	
	char barack[SIZE]={'Y','E','S',' ','W','E',' ','C','A','N'};
	char michelle[SIZE];
	
	
	
	//Part 1
	
	//Copy contents of the barack array to the michelle array
	for(i=0;i<SIZE;i++)
	{
		*(michelle+i) = *(barack+i);
	} //end for
	
	
	
	//Part 2
	for(i=0;i<SIZE;i++)
	{
		//Replace blank space with underline character
        if(*(michelle+i)==' ')
		{
			*(michelle+i) = '_';
		} //end if
		
	} //end for
	
	
	
	//Part 3
	printf("The michelle array contains... \n");
	
	//Display elements of the michelle array
	for(i=0;i<SIZE;i++)
	{
		printf("%c",*(michelle+i) );
	} //end for
	
	
	
	printf("\n \n Press enter to exit...");
	
	
	getchar();
	return 0;
	
}	//end main