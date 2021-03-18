#include <stdio.h>
#define SIZE 5

int main()
{
float gallons[SIZE];
float miles[SIZE];
float mpg[SIZE];
int i;

//part a
//enter data into miles and gallons array
for(i=0;i<SIZE;i++)
{
	printf("Enter data into array gallons \n");
	scanf(“%f”, &*(gallons+i) );
}

for(i=0;i<SIZE;i++)
{
	printf("Enter data into array miles \n");
	scanf(“%f”, &*(miles+i) );
}


for(i=0;i<SIZE;i++)
{
	*(mpg+i) = *(miles+i)/ *(galllons+i);
	printf("%f \n", *(mpg+i));
}

	getchar();
	return 0;
	
}	
