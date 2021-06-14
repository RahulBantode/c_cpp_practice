#include<stdio.h>
int main()
{
	int i=-4,j;
	int num;
	printf("%d",num);
	//confuse what the compiler is doing i dont understand
	j=(num<0?0:num*num);
	printf("%d",j);
	return 0;
}
