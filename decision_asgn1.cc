#include<stdio.h>

int main()
{
	int a=300,b,c;
	
	if(a>=400)
		b=300;
	c=200;
	
	printf("%d,%d",b,c);
	
	return 0;

}

//op is 0 and 200 because condition get false then b=300 this statment no executed and b is not getting any value
