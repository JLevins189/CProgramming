//Return a value from a function to get the most frequently used character
#include <stdio.h>

//Function signature
char freq_char(char,char,char);	

int main()
{
	char char1,char2,char3,most_char;
	
	//char1
	printf("Enter a character \n");
	scanf("%1s", &char1);
	
	//char2
	printf("Enter a 2nd character \n");
	scanf("%1s", &char2);
	
	//char3
	printf("Enter a 3rd character \n");
	scanf("%1s", &char3);
	flushall();
    
	//Use function to find most common frequently used character
	most_char=freq_char(char1,char2,char3);
	
	//Display most common
	printf("The most common value of the 3 characters is %c \n", most_char);
	//putchar("\n Most common character is %c", common);	INCORRECT WAY
	//putchar(common);	CORRECT WAY
	

	getchar();
	return 0;
	
}	//end main

char freq_char(char cha1,char cha2,char cha3)
{
    char common=' ';
    
	if(cha1==cha2 ||cha2==cha3)
	{
        common=cha2;
    }    
	else if(cha2==cha1 || cha3==cha1)
	{
        common=cha1;
    }    
	else if(cha2==cha3 || cha1==cha3)
	{
        common=cha3;
    }    
	
	return common;
}	