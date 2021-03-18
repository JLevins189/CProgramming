/*This is a program to calculate and display the answers of the 
  given arithmetic operations using modulus
Author: Jack Levins
Date Created/Rev: 30/09/2019
*/

#include <stdio.h>;
int main()

{

	int ans1;
	int ans2;
	int ans3;
	int ans4;
	int ans5;
	int ans6;
	
	ans1 = 2%2;
	ans2 = 3%2;
	ans3 = 5%2;
	ans4 = 7%3;
	ans5 = 100%33;
	ans6 = 100%7;
	
	printf("2/2 leaves remainder %d\n", ans1);
	printf("3/2 leaves remainder %d\n", ans2);
	printf("5/2 leaves remainder %d\n", ans3);
	printf("7/3 leaves remainder %d\n", ans4);
	printf("100/33 leaves remainder %d\n", ans5);
	printf("100/7 leaves remainder %d\n", ans6);
	
    getchar();    
	return 0;

}
