/*This is a program to display 3 floats
Author: Jack Levins
Date Created/Rev: 07/10/2019
*/
#include <stdio.h>;
int main()

{
	int age;
	float heart_beats;
	
	printf("Enter your age");
	scanf("%d", age);
	
	heart_beats= (age*75*60*24*365);
	
	printf("Your heart beats in your life averages %f for your age", heart_beats);
	
	getchar();
	return 0;
	
}