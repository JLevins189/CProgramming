#include <stdio.h>

int main()
{
	char my_word[]="Hello";
	puts(my_word);
	
	my_word[]={'H','e','l','l','o'};    //shows null character
	puts(my_word);
	
	getchar();
	return 0;
	
}	