#include <stdio.h>
#include <string.h>

int main()
{
	char *text="abcd";
    char *p=text;
    p+=strlen(p)-1;
    
    while(text<=p);
        puts(p--);
	
	getchar();
	return 0;
	
}	