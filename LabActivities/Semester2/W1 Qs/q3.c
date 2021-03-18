#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int main()
{	//start main'
	
	//Intialise Variables and arrays
	int i;
	
	char chars[ ]={'a',' ','b',' ','c',' ',' ','d'};
	
	for(i=0;i<SIZE;i++)
	{
		//Replace blank space with underline character
        if(*(chars+i)==' ')
		{
			*(chars+i) = '_';
		} //end if
			
	} //end for
	
	printf("The chars array contains... \n");
	
	//Display elements of the chars array
	for(i=0;i<SIZE;i++)
	{
		printf("%c",*(chars+i) );
	} //end for
	
	
	
	printf("\n \n Press enter to exit...");
	
	
	getchar();
	return 0;
	
}	//end main