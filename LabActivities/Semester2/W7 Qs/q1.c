#include <stdio.h>
#include <string.h>


#define SIZE 15


//Function Sig
int count_vowel (char[SIZE]);
void char_len_rev (char[SIZE]);
void concat (char[SIZE]);


int main()
{
	int no_vowels;
	char temp[SIZE];
	
	
	//Enter string
	printf("Enter a string \n");
	scanf("%s",&temp);
	flushall();
    
    
	//Pass string to vowel counter
	no_vowels=count_vowel(temp);
	printf("Amount of vowels in string is %d \n", no_vowels);
	
	//Display Reverse String
	char_len_rev(temp);
	
	//Concenate Strings
	concat(tem p);
	
	getchar();
	return 0;
}



//Vowel Counter Function
int count_vowel(char string1[])
{
	int i,j;
    int n;
	int counter=0;
	char vowels[5]={'a','e','i','o','u'};
	
    n = strlen(string1);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
            if(string1[i]==vowels[j])
			{
				counter++;
			}	//end if
		}	//end inner for
	}	//end outer for	
	
	return counter;
	
}	//end function



//Number of character
void char_len_rev (char str1[])
{
	int counter1 = 0;
	int i,j;
	char temp;
	
	//Count Characters
	counter1=strlen(str1);
	printf("\n Amount of characters in string is %d \n", counter1);
	
	j=counter1;

	//Reverse array
	for(i=0;i<SIZE;i++)
	{
		temp=str1[i];
		str1[i]=str1[j];
		str1[j]=temp;
		j--;
	}	
	
	//Display reversed array
	puts(str1);
	printf("\n");
    
}	//end function	



void concat(char s1[])
{
	char sentence[40] = {"I entered the string"};
	
	//Concenate Strings
	strcat(sentence,s1);
    printf("\n");
    puts(sentence);

}	