#include<stdio.h>
int main()
{
	int x=10, y=100%90;
	for(int i=1; i<=10; i++);
	if(x!=y);
		printf("x=%d,y=%d",x,y);
}
/* program print x=10,y=10
because for loop is terminated because of ; so it internally check condition 10 times and control goes
to the if the condition in if is getting false so you think it is not print anything on monitor but
as you see the ; after the if condition which terminates the if their so control jumps to printf statement 
and it will execute it successfully */

/*int main()
{
	for(;printf("*"););
}
it goes to infinite loop */
