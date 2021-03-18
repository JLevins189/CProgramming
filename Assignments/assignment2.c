/*
assignment2
A lotto game with user input validation, checking and sorting, prizes and frequency functions
The game is designed with the primary aim of matching your numbers with winning numbers along with
other functions.


Author: C19335843 Jack Levins
Date Rev: 02/03/2020
Compiler: Borland
*/


#include <stdio.h>

//Symbolic Names (for Arrays)
#define LOTTO_NUM 6
#define LOTTO_SIZE 43


//Function Signatures
int InputArray (int[]);
void DisplayArray(int[]);
int BubbleSort(int[]);
void CompareResult (int[], int[]);
void DisplayFrequency(int []);
int CountFrequency(int [],int []);


int main()
{
    
    
	int menu_num=0;	//menu selction number
	int program_run=0;	//to prevent certain options being used before numbers are input
	int your_number[LOTTO_NUM];	//entered numbers
	int winning_nums[LOTTO_NUM]={1,3,5,7,9,11};
	int frequency[LOTTO_SIZE]={0};	//a histogram to be filled to display number frequency occurances
	char exit='y';  //not setting to 'y' causes last else if to display message 
	
    
    
	while(1==1)
	{
		printf("\nMain Menu\n");
		printf("1. 	Enter your numbers \n");
		printf("2.	Display your numbers \n");
		printf("3.	Sort your numbers in ascending order	\n");
		printf("4.	Compare your numbers to the result.	\n");
		printf("5.	Display the frequency of numbers you have entered. \n");
		printf("6.	Exit Program \n");
		
		printf("\n \n	Please choose an option... \n");
		scanf("%d", &menu_num);
		getchar();	//Prevent loop on char input
        
		
        //Menu Option 1
		if(menu_num==1)
		{
			InputArray(your_number);	//Ask user for input
			program_run=1;	//allow other options to run
            
            frequency[LOTTO_SIZE]=CountFrequency(your_number,frequency);	//use array given to count frequency on input    //only display when asked
            
		}  //end menu if | Menu Option 2
		else if(menu_num==2)
		{
			
			//Display array ONLY if numbers have been entered
			if(program_run==1)
			{
				
                DisplayArray(your_number);
				
			}  //end if	
			else
			{
				
				printf("You must input numbers before using this option \n \n");
				
			}  //end else	
				
		}  //end menu else if |	Menu Option 3
		else if(menu_num==3)
		{
            if(program_run==1)	//Cannot display data that hasn'y been entered
			{
				
                BubbleSort(your_number);    //Sort Numbers
                DisplayArray(your_number);  //Display sorted array after sort
				
			}  //end if	
			else
			{
				
				printf("You must input numbers before using this option \n \n");
				
			}  //end else	
            
		}  //end menu else if |	Menu Option 4
		else if(menu_num==4)
		{
            
			if(program_run==1)
            {
                CompareResult(your_number,winning_nums);
            }    
			else
			{
				
				printf("You must input numbers before using this option \n \n");
				
			}  //end else	            
			
		}  //end menu else if |	Menu Option 5
		else if(menu_num==5)
		{
            
            DisplayFrequency(frequency);
            
		}
		else if(menu_num==6)
		{
            
			//Graceful Exit
			printf("Are you sure you want to exit y/n \n");
            scanf("%1s", &exit);
            
			if(exit=='y' || exit=='Y')
			{
				return 0;
			}
			else if (exit=='n' || exit=='N')
			{
				printf("OK! \n \n");
			}	
			else	//if y or n not detected
			{
				printf("Invailid Input! \n \n");
			}	
            
		}		
		else
		{
            
			printf("You have entered an invalid number. Please try again... \n \n \n");
            
		}
        
	} //end menu while loop
	
    
    
	
}  //end main






//Program Functions


//Input your numbers
int InputArray(int your_number[])	
{
	int temp=0;
    int i;           //,j,k;
	int validation[LOTTO_NUM]={0};
	
	
	printf("Choose any 6 numbers between 1 and 42 (inclusive) to be checked \n");
	
    
	//Validation Loop
	for(i=0;i<LOTTO_NUM;i++)
	{
		scanf("%d", &*(validation+i));	
        getchar();  //prevent infinite loop on char inputs
		//Range Validation
        while(*(validation+i)<1 || *(validation+i)>42)
		{
			printf("Please enter a number inside the range \n");
			scanf("%d", &*(validation+i));
            getchar();  //prevent infinite loop on char inputs
		} //end while	
        
        
        //Input validated data into array
        *(your_number+i)=*(validation+i);
        
        /*	Commented out code due to error message displaying at wrong time
		
		//Repeat Number Validation
		for(j=0;j<LOTTO_NUM;j++)
		{
			for(k=1;k<LOTTO_NUM;k++)
			{
				if(*(validation+j) == *(validation+k) && j!=k)
				{
					printf("Error! Repeat number detected! Please enter another number \n \n"); 
                    scanf("%d",&temp);
                    
                    while(temp==*(validation+k))
                    {
                        scanf("%d", &temp);
                    }   //end repeat number while
                    (*validation+k)=temp
				}	 //end if//end repeat number while
            
            
				//Input validated data into array
				*(your_number+j)=*(validation+j);
            
			}	//end innermost for
			
		}	//end inner for
        */
			
	}	//end outer for
	
	

	
	return your_number[LOTTO_NUM];
}	//end function	




//Display your Array
void DisplayArray(int your_number[])
{
    int i;
    
    //Print contents of array
	printf("You have entered... \n");
	for(i=0;i<LOTTO_NUM;i++)
	{
		printf("  %d  ",*(your_number+i)); 
	}   //end for
	
} //end display function	




int BubbleSort(int your_number[])
{
    int i,j,temp;
    
    
	//Sorting (bubble sort)
	for (i=0;i<LOTTO_NUM;i++)
	{
		for (j=0;j<(LOTTO_NUM-i-1);j++)
		{
			if (*(your_number+j)> *(your_number+j+1))
			{
				
				temp=*(your_number+j);
				*(your_number+j) = *(your_number+j+1);
				*(your_number+j+1) = temp;
				
			}  //end if
			
		}  //end inner for
		
	}  //end outer for
		
		
	printf("Your numbers have successfully been sorted into ascending order \n \n \n");
	
	return your_number[LOTTO_SIZE];
	
}  //end sorting function	
			



void CompareResult (int your_number[], int winning_nums[])
{
	int counter=0;
	int i,j;
	
	
	//Sequential Search Results
	for(i=0;i<LOTTO_NUM;i++)
    {
        for(j=0;j<LOTTO_NUM;j++)
        {
			if(*(your_number+i)==*(winning_nums+j))
			{	
				counter++;	//incriment counter of matching numbers
			}  //end if

		} //end inner for

	}  //end outer for
	
	
	//Prizes Counter Feedback
	if(counter==6)
	{
		printf("\n You have won the jackpot! Congratulations \n \n");
	}
	else if(counter==5)
	{
		printf("Congratulations you matched %d numbers! You have won a new car! \n \n", counter);
	}
	else if(counter==4)
	{
		printf("Congratulations you matched %d numbers! You have won a weekend away! \n \n", counter);
	}		
	else if(counter==3)
	{
		printf("Congratulations you matched %d numbers! You have won a cinema pass! \n \n", counter);
	}
    else
    {
        printf("You didn't win anything... Better luck next time! \n \n");
	}
	
}  //end comparison functions	



int CountFrequency(int your_number[],int frequency[])
{
    int i,temp;
	
	//Fill histogram array with contents of user input array
    for(i=0;i<LOTTO_NUM;i++)
    {
        temp=*(your_number+i);
        *(frequency+temp)=(*(frequency+temp))+1;        //if e.g 6 is entered element 6 will have an incrimented frequency
	}
	
	return frequency[LOTTO_SIZE];
}	




void DisplayFrequency(int frequency[])
{
	int i;
	
	
	//Display the contents of the histogram array as frequency
	for(i=1;i<LOTTO_SIZE;i++)	//element 0 is unused
	{
		
		if(*(frequency+i)>0)
		{
			printf("Number %d was entered %d times \n \n",i,*(frequency+i));
		}  //end if
	
	}  //end for
		
} //end function

	