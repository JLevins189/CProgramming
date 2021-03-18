#include <stdio.h>
#include <string.h>
#define SIZE 4
int main()
{
    int i;
    char name[SIZE];
    
    printf("Enter your name \n");
    for(i=0;i<SIZE;i++)
    {    
        scanf("%c",&name[i]);
    }  

    for(i=0;i<SIZE;i++)
    {    
        printf("%c ",name[i]);
    }  
    
    flushall();
    getchar();
	return 0;
    
}    