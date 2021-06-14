//trace the output

#include<stdio.h>

int main()
{
	int a , *b, **c, ***d, ****e;
	a = 10;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	
	printf("a = %d \n b = %u \n c = %u \n d = %u \n e = %u \n",a,b,c,d,e);
	printf("%d \n %d \n %d \n",a,a + *b, **c + ***d + ****e + 20);
	
	return 0;
}
