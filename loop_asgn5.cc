#include<stdio.h>
int main()
{
	int x=4,y=0,z;
	while(x>=0)
	{
		if(x==y)
			break;
		else
			printf("%d,%d\n",x,y);
		x--;
		y++;
	}
}

/* op-
4,0
3,1
then x=2 and y=2
so if condition satisfies then after entering the if break is appear and break statement break the
execution of loop and jumps the control the statement followed by loop */
