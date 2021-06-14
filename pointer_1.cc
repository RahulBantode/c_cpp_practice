#include<stdio.h>
int main()
{
	int x=20,y=40;
	int *ptr,*rt;
	
	*rt=12;
	printf("%d",rt);
	
	ptr=&x;
	printf("Address of x in ptr = %d\n",ptr);
	
	ptr=0;
	printf("value of ptr = %d\n",ptr);
	
	printf("Address of X = %u\n",&x);
	
	printf("Value at the x = %d\n",x);
	
	*ptr=50;
	printf("Now value at X = %u\n",*ptr);
	
	return 0;	
	
}
