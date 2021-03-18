//&my_array[0]== my_array

#include <stdio.h>
#define SIZE 5
int main()
{
	int my_array [SIZE];
	printf("&my_array is %p, &my_array[0] is %p", my_array, &my_array[0])

	getchar();
	return 0;

}
