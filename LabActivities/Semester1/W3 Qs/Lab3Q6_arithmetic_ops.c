/*This is a program to calculate and display the results of 
  given arithmetic operations.
Author: Jack Levins
Date Created/Rev: 30/09/2019
*/

#include <stdio.h>;
int main()

{

	int sum1 = (15+10);
	int sum2 = (15-10);
	int sum3 = (15*10);
	float sum4 = (15/10);
	int sum5 = (15%3);
	
	printf(" 15+10 = %d\n", sum1);
	printf(" 15-10 = %d\n", sum2);
	printf(" 15x10 = %d\n", sum3);
	printf(" 15/10 = %f\n", sum4);
	printf(" 15%10 leaves remainder %d\n ", sum5);
	
    getchar();
	return 0;
   
}	