#include<stdio.h>
int main()
{
	int a=10,b=12,c=0;
	int r1,r2,r3,r4,r5;
	
	r1=(a!=6 && b>5); //op-1
		printf("%d",r1);
		
	r2=(a==9 || b<3);//op-0
		printf("%d",r2);
		
	r3=!(a<10);//op-1
		printf("%d",r3);
		
	r4=!(a>5 && c);//op-1
		printf("%d",r4);
		
	r5=(5 && c != 8 || !c);//op-1
		printf("%d",r5);
		
	return 0;
	
}
