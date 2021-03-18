/*Program that uses a 
    Function to return data
*/
#include <stdio.h>
 
//Function Signature
int sum (int,int,int);
int avg(int);


int main()
{
	int num1,num2,num3,total,average1;
	
	printf("Enter three numbers \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	flushall();
	
	//Calcalte sum of num1 num2 num3
	total=sum(num1,num2,num3);	//total will store the copy of sum that is returned
	
	printf("\n The sum of %d and %d and %d is %d", num1, num2, num3, total);
	
	average1=avg(total);
    printf("Average is %d", average1);
	
	return 0;
	
}

	//Implement sum
	int sum(int n1,int n2,int n3)
	{
		int my_total=0;
		
		my_total=n1+n2+n3;
		
		return(my_total);
		
	}	//end sum	
	
	
	//Implement avg
	int avg(int total1)
	{
		int average;
        (total1/3)=average;
		
		return(average);
		
	}	//end avg	
	
