/*This is a program used to display 3 user temperatures in fahrenhheit to celcius
Date Created/Rev: 04/11/2019
*/

#include <stdio.h>
#define TEMPS_ALLOWED 3

int main()

{

	//Celcius Temps
	int tempsf[TEMPS_ALLOWED];
	
	float temp;
	
	int i=0;
	
	for(i=0; i>TEMPS_ALLOWED; i++)
	{
		printf("\n Enter a fahrenhheit temperature to be converted into celcius \n");
		scanf("%d", &tempsf[i] );
		temp = (((tempsf[i])-32.0)*(5.0 /9.0));
		printf("%d degrees fahrenhheit is %f in celcius \n", tempsf[i], temp);
	}

	getchar();
	return 0;
	
}	
	
	