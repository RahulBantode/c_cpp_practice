#include<stdio.h>

/*int main()
{
	int i=2,j=3,k,l;
	float a,b;
	
	k=i/j*j;
	l=j/i*i;
	a=i/j*i;
	b=j/i*i;
	
	printf("%d,%d,%d,%d",k,l,a,b);
	return 0;//op acc to the compiler= 0,2,0,0
}*/

int main()
{
	int a,b;
	a=-3 - -25;
	b=-3--(-3);//error value requeired as decrement operand
	printf("%d,%d",a,b);
	
}
