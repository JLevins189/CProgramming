#include <stdio.h>
#include <string.h>
int main()

{

	char password[10]= "secret"
	char input[100];
    int result;
    
	printf("Enter your password \n");
	gets(input);
	
	result=strcmp(input,password);
	
	if(result==0)
	{
		printf("\n Identical strings");
	}
	else
	{
		printf("\n Different strings");
	}

	getchar();
	return 0;
		
}		

