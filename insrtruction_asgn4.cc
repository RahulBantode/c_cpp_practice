#include<stdio.h>

int main()
{
	int a=10,b=2;
	float c=2.9;
	
	int result=10/2;
	printf("%d\n",result); //op=5
	
	result=10%2;
	printf("%d\n",result);//op=0
	
	result=10/2.9;
	printf("%d\n",result);//op=3
	
	/*int r=c%2.3f; //here error comes because % operator doesnt works on float variables
	printf("%d\n",r);*/
	return 0;
}
//Note= Using % operator the sign of remainder is same as the sign of numerator ex=
//-5 % 2 = -1 whereas, 5 % 2 = 1....sign of numerator matters here... 



