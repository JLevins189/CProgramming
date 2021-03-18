/*Using pointer location 
  with an 1-D array to point at the array
*/

#include <stdio.h>
#define SIZE 5

int main()
{
	int array1[SIZE];
	int *ptr;
	
	ptr=array1;
	
	/* ptr points at a memory location and
	the array is a memory space (element 0) 
	*/
	
	ptr++;
	
	/* This will move to point at the next
	   memory location and will point at element 1
	*/

	/* 
	array1++;
			This can't be done as you can't move the memory
			location allocated by the OS for storing the variable
	*/

	ptr--;
	/* This can only be done once you stay inside the 
	    bounds of the array. Won't work when pointing at first element
	*/	
	
	/*
	ptr = ptr+6;
	Outside the bounds of the array
	*/
		
	getchar();
	return 0;
	
}	//end main	