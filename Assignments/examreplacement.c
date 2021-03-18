
/*
exam.c
A program used to encrypt a 4 digit number and verify if it matches the given security code.
This program uses user input with verification as well as a random number generator option
A menu-driven program allowing decryption, encryption and verification and counting the amount of incorrect and correct attempts using structures.


Author: C19335843 Jack Levins
Date Rev: 12/05/2020
Compiler: Borland
*/


#include <stdio.h>
#include <stdlib.h>


//Symbolic Names
#define NO_DIGITS 4


//Structure Templates
struct code_counter 
{ 
 
    int correct_code; 
    int wrong_code;

};	


//Function Signatures
void enter_values(int*);
void encrypt_code(int*);
void code_check(struct code_counter *freq, int*);
void decrypt_code(int*);
void checker_counter(struct code_counter *freq);


int main()
{
	char exit='o';
	int menu_num=0;
	int encryption_run=0;
    int program_run=0;
	int access_code [NO_DIGITS]={4,5,2,3};
	int your_code [NO_DIGITS]={0};
	
	
	
	while(exit!='y' || exit!='Y')	//program runs until exit is confirmed
	{
		//Main Menu Display
		printf("\nMain Menu\n");
		printf("1.	Enter a code or generate a random code \n");
		printf("2.	Encrypt code\n");
		printf("3.	Check if the encrypted code matches the default authorised access code\n");
		printf("4.	Decrypt code\n");
		printf("5.	Display frequency of correct/incorrect entries\n");
		printf("6.	Exit program\n");
		
		printf("\n \n	Please choose an option... \n");
		scanf("%d", &menu_num);
		getchar();	//Prevent loop on char input
        
		
		switch(menu_num)	//Option Selected
		{
		//Menu Option 1 - Input/Generate Numbers to Check
			case 1:
				enter_values(your_code);
				encryption_run=0;	//Resets encryption_run on new code 
                program_run++;  //code must be input before encryption run 
				break;
		//Menu Option 2 - Encrypt the entered/generated code
			case 2:
				if(encryption_run==0 && program_run>0)
				{	
					encrypt_code(your_code);	//only encrypt if not already encrypted
					encryption_run++;	//to prevent encrypting again
				}	//end if
				else
				{
					printf("Code already encrypted \n \n");
				}	//end else
				break;
		//Menu Option 3 - Check if the entered and ecrypted code is correct
			case 3:		
				struct code_counter freq;	//Alter structure contents when checking results
                if(encryption_run==1)	//only check if code is encrypted first
				{
					code_check(&freq, your_code);
				}	//end if
				else
				{
					printf("Please encrypt your code first... \n \n");	//will not allow unencrypted codes
				}	//end else
				break;
		//Menu Option 4 - Decrypt your encrypted code
			case 4:
				if(encryption_run==1)	//only decrypt encrypted codes
				{
					decrypt_code(your_code);
					encryption_run=0;	//to allow encryption and not allow decryption
				}	//end if
				else
				{
					printf("Please encrypt your code first... \n \n");
				}	//end else
				break;
		//Menu Option 5 - Display the amount of correct/incorrect code entries
			case 5:
                freq.correct_code=0;	//prevent random data
                freq.wrong_code=0;		//prevent random data
                checker_counter(&freq);	//display frequencies of correct/incorrect entries
				break;
		//Menu Option 6 - Graceful Exit
			case 6:
				printf("Are you sure you want to exit y/n \n");
				scanf("%1s", &exit);
            
				if(exit=='y' || exit=='Y')
				{
					return 0;	//close program if exit confirmed
				}	//end if
				else if (exit=='n' || exit=='N')
				{
					printf("OK! \n \n");	//return to main menu if exit aborted
				}	//end else if
				else	//if y or n not detected
				{
					printf("Invailid Input! \n \n");
				}	//end else			
				break;
		//Default Option - Invalid Menu Number Entered
			default:
				printf("You have entered an invalid number. Please try again... \n \n \n");
				break;
		}	//end switch statement - menu numbers	
		
		
	} //end menu while loop
	
	
}  //end main

	
	
void enter_values(int* array1)
{
	int menu_no=0;	//choose user input or randomly generated numbers
	int i,temp;
	
	
	//Input Type Selection
	printf("Press 1 to enter your own code or 2 to generate a random one \n");
	scanf("%d",&menu_no);
	
	
	switch(menu_no)
	{
		case 1:	
			//User Input
			printf("Enter your security code. Digit by Digit \n");
			for(i=0;i<NO_DIGITS;)
			{
				scanf("%d",&temp);
				
				//Validation
				if(temp>=0 && temp<10)
				{
					*(array1+i)=temp;	//only assign temp into the array if it is in range
					i++;	//only incriment i if number is in range
				}	//end if
				else
				{
					printf("Please enter a number between 0 and 9 (inclusive) \n");	
				}	//end else	
			
			}	//end for
			
			
			flushall();	//borland compiler
			break;
		case 2:
			//Random Code Generator
			printf("Generating Random Code... \n");
			printf("Your random code is \n");
			
			
			//Generate Random Code
			for(i=0;i<NO_DIGITS;i++)
			{
				temp=rand()%10;
				*(array1+i)=temp;
				printf("%d	", *(array1+i));	//Display random numbers as they are generated
			}	//end for
			
			
			printf("\n \n");	//Create spacing
			break;
		default:
			//Invalid choice entered
			printf("Please enter a vailid option \n \n");
			break;
	}	//end switch statement	
		
		
}	//end number input function
	
	
	
void encrypt_code(int* array1)
{
	int temp=0;
	int i;
	
	
	
	//Swap Numbers
	temp=*(array1+2);   //temp = 3rd number
	*(array1+2)=*(array1+0);    //1st number put in 3rd 
	*(array1+0)=temp;   //3rd number (temp) put in 1st
	
	temp=*(array1+1);   //temp = 2nd number
	*(array1+1)=*(array1+3);    //4th number put in 2nd 
	*(array1+3)=temp;   //2nd number (temp) put in 4th
	
	
	//Add 1 to each
	for(i=0;i<NO_DIGITS;i++)
	{
		*(array1+i)=*(array1+i)+1;
	}	//end for
		
		
	//Make 10 a 0
	for(i=0;i<NO_DIGITS;i++)
	{
		
		if(*(array1+i)==10)
		{
			*(array1+i)=0;
		}	//end if
		
	}	//end for


}	//end encryption function

   

void code_check(struct code_counter *freq,int* array)
{
	int access_code[NO_DIGITS]={4,5,2,3};
	int counter=0;
    int i;
    
	

	for(i=0;i<NO_DIGITS;i++)
	{
		//Count matching digits
		if(*(array+i)==*(access_code+i))
		{
			counter++;	
		}	//end if
		
	}	//end for loop
	
	
	//if all digits match or not
	if(counter==4)
	{
		printf("Correct Code entered \n \n");
		//freq.correct_code++;
	}	//end if
	else
	{
		printf("Wrong Code entered \n \n");
		//freq.wrong_code++;
	}	//end else		
	
    
}	//end code checker function	



void decrypt_code(int* array2)	//Encrypt code reverse order
{
	int temp=0;
	int i;
	

	//Add 1 to each
	for(i=0;i<NO_DIGITS;i++)
	{
		*(array2+i)=*(array2+i)-1;
	}	//end for
		
		
	//Make -1 a 9
	for(i=0;i<NO_DIGITS;i++)
	{
		
		if(*(array2+i)==-1)
		{
			*(array2+i)=9;
		}	//end if
		
	}	//end for
	
	
	//Swap Numbers
	temp=*(array2+2);   //temp = 3rd number
	*(array2+2)=*(array2+0);    //1st number put in 3rd 
	*(array2+0)=temp;   //3rd number (temp) put in 1st
	
	temp=*(array2+1);   //temp = 2nd number
	*(array2+1)=*(array2+3);    //4th number put in 2nd 
	*(array2+3)=temp;   //2nd number (temp) put in 4th
	
		
	//Display decrypted numbers
	printf("Decrypted code: \n");
	
	for(i=0;i<NO_DIGITS;i++)
	{	
		printf("%d	", *(array2+i));
	}	//end for
	
	
}	//end decryption function
	
	

void checker_counter(struct code_counter *freq)
{
	printf("Correct code entered %d times \n", freq->correct_code);
	printf("Incorrect code entered %d times \n", freq->wrong_code);
}	