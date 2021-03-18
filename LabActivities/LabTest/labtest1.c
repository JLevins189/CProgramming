/*This is a program to implement the Fibonacci series using n amount of terms.
Author: Jack Levins
Date Created/Rev: 21/10/2019
*/
#include <stdio.h>;
int main()

{					    //start main

	int prev;			//intialise current and previous variables
	int curr;
	
	int i;			//intialise counter variables
	int n;			// n is user input/ i is program counter
	
    curr=1;
    i=0;
    n=0;
    prev=0;
    
    
	printf("Input the amount of elements of the Fibonacci series you would like to display \n Or press 0 to exit \n");
	scanf("%d",&n);
    flushall();
    
    printf(" 0 \n 1 \n ");      //to prevent 0+0 loop
	i=1;

    
	do 		//start if block main
	{
		printf("%d \n",curr);		
        curr=curr+prev;
		prev=curr;
		i++;  
      //incriment program counter
    }
    while(n>i);
        
	if (n==0)
	{	
        printf("Exiting Program \n");		//if user decides to exit
    }


	getchar();
	return 0;
	
}	// end main
	
	