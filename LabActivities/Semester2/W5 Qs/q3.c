#include <stdio.h>

int main()
{
	char *text="some text";
    
    //printf("%s\n", text);   //some text

    //printf("%c\n", *text);  //s

    //printf("%c\n", *"more text"); //m

    //printf("%c\n",*(text+1));   //o

	//printf("%s", text+1);   //ome text

    //printf(text); //some text
   
    /*  *(text+4)='\0';
              printf("\n%s\n",text);  //some  */
    
    //printf("%c", "text"[2]);  //x
    
    //printf("%s", "text"+2); //xt
	
    getchar();
	return 0;
	
}	