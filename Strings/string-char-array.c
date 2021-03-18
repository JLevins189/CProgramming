#include <stdio.h>

int main
{
	char greeting[6]={'H','e','l','l','o','\0'};
	char greeting[6]="Hello";	//automatic null character
	//same thing
	//Size is 6 to ensure at least one null character at end
	

	int i;
	for(i=0;i<6;i++)
	{
		printf("%c",greeting[i]);
	}
			   //or
		
		printf("%s", greeting);
	
	
	//printf("%20s",greeting); 	this will print 20 blank characters and place hello on the last 6
	//%20.2s will only print "He"
	
	

	char input [21];
	printf(“Enter a name \n);
	scanf(“%s”, input);	// no '&' as string is array and arrays 1st address is location of 1st element
	// scanf only takes up till first white space character
	
	//workaround is gets(" ");
	gets(input);
	printf("\n Hello ");
	puts(input);
	return 0;
}	
	
	

	