//prog to accept five digit from user and print their addition(sum of digits)
#include<stdio.h>

int main()
{
	int no,rem;
	int sum=0;
	printf("Enter the five digit no= ");
	scanf("%d",&no);
	
	while(no>0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	
	printf("The sum of digits = %d",sum);
	
}
