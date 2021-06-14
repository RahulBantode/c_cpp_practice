#include<stdio.h>
int main()
{
	int no;
	printf("Enter the No..= ");
	scanf("%d",&no);
	
	int fact=1;
	for(int i=1; i<=no; i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d = %d",no,fact);
	return 0;
}
//program to find factorial of number
