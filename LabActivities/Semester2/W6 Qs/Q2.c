#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10
int main()
{
    
    int i,j,str;
	char countries[SIZE][12]={"Austrailia","Belgium",
                        "China","Denmark",
                        "England","France",
                        "Greece","Ireland",
                        "Scotland","Wales"};
	
    char capitals[SIZE][10]={"Canberra","Brussels","Beijing","Copenhagen","London","Paris","Athens","Dublin","Edinburgh","Cardiff"};
	
	char temp[10];
	
	printf("Enter a country to find it's capital city \n \n");
	gets(temp);
	str=strlen(temp);
	for(i=0;i<SIZE;i++)
	{
        for(j=0;j<str;j=j+str)
        {
            if( strcmp(temp,countries[i]) == 0)
            {
                printf("%s", capitals[i]);
            }  //end if
        } //end inner for      
	
	}  //end outer for
	
	
	getchar();
	return 0;
	
}	