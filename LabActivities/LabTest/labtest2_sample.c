/* 
	labtest2 sample
	Program that uses pointer notation with arrays
	
	Author: Dr. Michael Collins
	Compiler:Borland
	Date Created: 03/12/2019
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{	//start main

	char barack[ ]={'Y','E','S',' ','W','E',' ','C','A','N'};
	char michelle[SIZE];{' '};
	
	int i;
	
	//Part 1
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
	
	getchar();
	return 0;
	
}	