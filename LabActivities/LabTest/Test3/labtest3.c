/*
labtest3
Program to convert currencies
Student Number:C19335843
Author: Jack Levins
*/

#include <stdio.h>
#define SIZE 3

//Function signatures
float change_to_Euro(float[]);
float change_to_Dollar(float[]);

int main()
{
	int menu_num;
	int i;
	float avg;
    float euro_arr[SIZE];
	float doll_arr[SIZE];	
	
	//Menu
	printf("Please choose a currency \n");
	printf("1.	Euro \n");
	printf("2.	US Dollars \n \n");
	printf("\n Press 0 to exit");
		
	scanf("%d",&menu_num);
	
	while(menu_num!=0)
	{
        //Menu
        printf(" \n \n \n \n Please choose a currency \n");
        printf("1.	Euro \n");
        printf("2.	US Dollars \n \n");
        printf("\n Press 0 to exit");
		
	scanf("%d",&menu_num);
		if(menu_num == 1)
		{
			printf("Enter any 3 amounts to be converted to dollars \n");
			
			for(i=0;i<SIZE;i++)
			{
				scanf("%f", &euro_arr[i]);
			} //end for
			
			//Convert euro to dollars
			avg=change_to_Dollar(euro_arr);
			
			printf("The average of the  converted amounts are %f \n",avg);
		
		
		} //end if
		else if(menu_num==2)
		{
			printf("Enter any 3 amounts to be converted to euros \n");
			
			for(i=0;i<SIZE;i++)
			{
				scanf("%f", &doll_arr[i]);
			} //end for
			
			//Convert dollars to euro
			avg=change_to_Euro(doll_arr);
			printf("The average of the  converted amounts are %f \n",avg);
		
		
		}	//end else if
		else
		{
			printf("Please choose a vailid option \n \n");
		}	//end else if
	
	} //end while
	
    
    return 0;
    
}  //end main	
	

	
float change_to_Euro(float new_dollars[SIZE])
{
	int i;
    float avg;
	float sum=0;
    float euro_arr1[SIZE];
	
		//Convert
		for(i=0;i<SIZE;i++)
		{	
			euro_arr1[i]=(new_dollars[i])*0.84;
		}	
		
		//Avg Val
		for(i=0;i<SIZE;i++)
		{	
			sum=sum+euro_arr1[i];
		}	
		avg=sum/SIZE;
        
        
		//Display
		for(i=0;i<SIZE;i++)
		{	
			printf("\n The original dollar value was %f and the euro value is %f \n",new_dollars[i], euro_arr1[i]);
		}	
		
		
	return avg;	
		
	
} //end function	



float change_to_Dollar(float new_euro[SIZE])
{
	float avg;
	float sum=0;
	int i;
    float doll_arr1[SIZE];
    
		//Convert
		for(i=0;i<SIZE;i++)
		{	
			*(doll_arr1+i)=(*(new_euro+i))*1.19;
		}	
		
		//Avg Val
		for(i=0;i<SIZE;i++)
		{	
			sum=sum+doll_arr1[i];
		}	
		avg=sum/SIZE;
        
		
		//Display
		for(i=0;i<SIZE;i++)
		{	
			printf("\n The original euro value was %f and the dollar value is %f \n",new_euro[i],doll_arr1[i]);
		}	
		
	return avg;	
		
	
	
} //end function	
	