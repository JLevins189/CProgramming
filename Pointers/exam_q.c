/* Program that uses calloc for
    dynamic memory allocation*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int values[5]={1,5};
	int *ptr=values;
	
	//q1
	*(ptr+2)=7;
	// array contains 1,5,7,0,0
	
	//q2
	*ptr=0;
	//array contains 0.5.7.0.0
	
	//q3
	*(ptr+4)=*(ptr+2);
	//array contains 0,5,7,0,7
	
	//q4
	*(ptr+4)
	//redundant code
	
	return 0;
	
}	