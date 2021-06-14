#include<stdio.h>
int main()
{
	int i;
	for(i=1; i<=5; printf("%d\n",i)); //doesent gives an erro but it goes to the infinite loop
		i++;
	return 0;
}

//doesent gives an erro but it goes to the infinite loop

/*
int i;
	for(i=1; i<=5; printf("%d\n",i))
		i++;
	return 0; 
	
	if we code like this then op is 2,3,4,5,6.... becuase at the time condition is true it goes inside the lopp
												and i becomes ++ so it direct print 2 then check condition
												2<=5 condtion true go inside loop and increment by 1 so it
												becomes 3 then print it at the last 5<=5 condition true then 
												go inside the loop and increment then it becomes 6 so it will
												print 6 */
