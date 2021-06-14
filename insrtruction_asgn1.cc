#include<stdio.h>

int main()
{
	//int a=b=c=d=10;
	int a,b,c,d;
	a=b=c=d=10;
	printf("%d,%d,%d,%d",a,b,c,d);
	return 0;
}

/* o/p-
	the error comes that is b,c,d, was not declare in this scope to remove this
	we solution like
*/	

