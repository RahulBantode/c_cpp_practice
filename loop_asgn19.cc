#include<stdio.h>
int main()
{
	int no;
	printf("Enter the no. which you want the multiplication table...");
	scanf("%d",&no);
	
	for(int i=1; i<=10; i++)
	{
		printf("%d * %d =%d\n",no,i,no*i);
		
	}
	
}
