#include <stdio.h>
int range_test(int val, int low, int high);
//where val is value to be tested, low is lower value in range, high is higher value
//ans is 1 for inside range, 0 for outside range



	ans=range_test(5,1,0); 
	
	//Implement Range Test
	int range_test(int val,int low,int high);
	{
		if(val>=low && val<=high)
		{
			return 1;
		} //end if
		else
		{
			return 0;
		} //end else
		
	} //end range_test	
		
