
#include <stdio.h>

//Function signature
void fxn(void)	

int main()
{
	int i;
	
	for i=0;i<5;i++)
	{
		fxn();
	}
	return 0;
}	//end main



//Implement fxn
void fxn()
{
	int auto_var=0;
	static int static_var=0;	//if you assign static var a value on a seperate line it will be assigned that value every function run
								//initializing and assigning on same line means it keeps its value from last function run
	
	auto_var++;
	static_var++;
	
	printf("\n auto_var is %d \n static_var is %d", auto_var, static_var);
	
}  //end fxn	