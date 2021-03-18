/*Using pointer location 
  with an 1-D array
*/

#include <stdio.h>
#define SIZE 5

int main()
{
	int numbers[SIZE];
	int i;
	
	//Enter data into array
	printf("Enter %d numbers \nù", SIZE);
	
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &*(numbers+i) );
	} //end for
	
	
	//Multiply each element by 10
	for(i=0; i<SIZE; i++)
	{
		*(numbers+i) = *(numbers+i)*10;
	} //end for
	
	//Display contents of array
	for(i=0; i<SIZE; i++)
	{
		printf("%d \n", *(numbers+i) );
	} //end for
	
	getchar();
	return 0;
	
}	//end main	
	
