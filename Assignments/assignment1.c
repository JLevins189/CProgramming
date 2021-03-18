/*
Programming Assignment 1
This is a maths game designed to be run continuously until the user gracefully exits.
Author: Jack Levins
Student Number: C19335843
Compiler:Borland
Date Revision: 09/11/2019
*/


#include <stdio.h>
int main()

{	//start main

	//initialise menu variables
	int menunum;
	int correct=0;
	int wrong=0;
	
	//initialisng index variables, i for q3 being asked only after completeion
	int i=0;
	int j;
	
	//intialising answer variables
	int ans1;
	int ans2;
	int ans3;
    int ans4;
    int ans5;
    	

	
	// do loop for re-running program unless stated otherwise
	do
	{
		
		//Menu Display
		printf("Maths Quiz Program \n \n");
		printf("**You must choose option 1 before choosing option 2 to select the amount of questions to answer** \n \n"); 
		printf("	1.Enter the nummber of questions to be asked this round (max. 5 questions) \n");
		printf("	2.Start Quiz \n");
		printf("	3.Display the amount of questions that were correct and incorrect (for the last round) \n");
		printf("	4.Exit Program \n \n \n");
		scanf("%d",&menunum);
        getchar();  //stop infinite loop when a character is entered on the menu screen
		
	
		
		switch (menunum)	//menu number selection cases
        {
			case (1):	//if one is pressed
			
				printf("Enter the amount of questions you would like to be asked in this round \n \n");
				scanf("%d",&j);
				
				if((j>0) && (j<6)) 
				{
					printf("Press 2 to start quiz \n \n");
                }    
				else
				{
					printf("Error:Invailid number of questions... \n press 1 to re-enter \n \n");
				}	

                break;	//end case 1

					
		
			case 2:	//if two is pressed
			
				if(i>0 && (j>0 && j<6))	
				{
					i++;	//mark quiz as completed so option 3 can run
					
					//Question1
					printf("Question 1. What is 2+3? \n");
					scanf("%d", &ans1);
			
					if(ans1!=5)
					{
						wrong++;
						printf("You entered %d, \n",ans1);
						printf("The correct answer is 5 \n \n");
						j--;
					}	//end if block
					else
					{
						correct++;
						printf("Correct \n \n");
						j--;
					}	
					//end if..else q1
					
					
					//Question 2
					if(j>0)
					{
						printf("Question 2. What is 18/3? \n");
						scanf("%d", &ans2);
			
						if(ans2!=6)
						{
							wrong++;
							printf("You entered %d \n", ans2);
							printf("The correct answer is 6 \n \n");
							j--;
						}	//end if block
						else
						{
							correct++;					
							printf("Correct! You got it! \n \n");	
							j--;
						}	//end if...else	
						
					} //end q2 if
			
			
					//Question 3
					if(j>0)
					{
						printf("Question 3. What is 9x8? \n");
						scanf("%d", &ans3);
			
						if(ans3!=72)
						{
							wrong++;
							printf("You entered %d \n", ans3);
							printf("The correct answer is 72 \n \n");
							j--;
						}	//end if block
						else
						{
							correct++;					
							printf("Correct! You got it! The answer is %d \n \n", ans3);	
							j--;
						}	//end if...else

					}	//end q3 if
				
				
					//Question 4
					if(j>0)
					{
						printf("Question 4. What is 21-4+7? \n");
						scanf("%d", &ans4);
			
						if(ans4!=24)
						{
							wrong++	;
							printf("You entered %d \n", ans4);
							printf("The correct answer is 24 \n \n");
							j--;
						}	//end if block
						else
						{
							correct++;					
							printf("Correct! You got it! The answer is %d \n \n", ans4);	
							j--;
						}	//end if...else
					}	//end q4 if

					
					//Question 5
					if(j>0)
					{
						printf("Question 5. What is (15x4)+12? \n");
						scanf("%d", &ans5);
						flushall();
			
						if(ans5!=72)
						{
							wrong++;
							printf("You entered %d \n", ans5);
							printf("The correct answer is 72 \n \n");
							j--;
						}	//end if block
						else
						{
							correct++;			
							printf("Correct! You got it! The answer is %d \n \n", ans5);	
							j--;
						}	//end else						
					}	//end q5 if
				
				printf("To see your results enter 3 \n \n");
				}	//end quiz if
				else
				{
					printf("Invailid number of questions entered... \n");
					printf("Please press 1 to re-enter the amount of questions you want \n \n");
				}	//end else


                break;	//end case 2

			
            case 3:
			
                if(i>0)
                {
                    printf("You got %d correct and %d incorrect \n \n", correct, wrong);
                }	//end if block
                else
                {
                    printf("You must complete the quiz first \n \n");	
                }	//end else
			
		
				//Reset values for re-runs
				correct=0;
				wrong=0;
				j=0;
				
                break;	//end case 3
		
		
		
            case 4:
                printf("Press any key to exit \n \n");
                printf("Exiting Program...");
                break;	//end case 4
			
            
            default:
                printf("\n \n");
                break;	//end default
            
      
        } 		//end switch block 
		
    }while (menunum!=4);    //end do...while block
    

	
	
		getchar();
		return 0;
		
}	//end main