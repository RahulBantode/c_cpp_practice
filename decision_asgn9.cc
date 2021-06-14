#include<stdio.h>
int main()
{
	int i=-1,j=1,k,l;
	
	k=!i && j; //op 0
	l=!i || j; //op 1
	printf("%d,%d",k,l);
	return 0;
}
