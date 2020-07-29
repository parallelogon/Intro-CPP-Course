/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include<stdio.h>
#include<iostream>

int main()
{
	int min = 0;
	int max = 0;
	int num = 0;
	float avg = 0;

	scanf("%d",&num);
	min = max = num;
	avg += num;

	int i = 0;
	for(i = 0;i < 14; i++)
	{
    		scanf("%d",&num);
    		if(num < min)
    		{
        		min = num;
	    	}

		if(num > max)
    		{
        		max = num;
    		}
    		avg += num;
	}

	avg /= 15;

	printf("Minimum: %d\nMaximum: %d\nAverage: %f\n",min, max, avg);
	return 0;
}
