#include<stdio.h>
int main()
{
	float a,b,result;
	a=2.5f,b=9.5f;
	
	result=a*2.3f+6.7f+b;//real mode arithmetic statement=which consist real constants or real variables ..real means floating
					   //point no.
	
	printf("The result =%d",float(result));
	
	return 0;	
	
}
