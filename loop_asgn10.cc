#include<stdio.h>
int main()
{
	int no;
	printf("Enter the No.. = ");
	scanf("%d",&no);
	
	int newno=no;
	int rem=0;
	int sum=0;
	
	while(no!=0)
	{
		rem=no%10;
		int cub=rem*rem*rem;
		sum=sum+cub;
		no=no/10;			
	}	
	
	if(sum==newno)
	{
		printf("The no %d is Armstrong no...",newno);
	}
	else
	{
		printf("The no %d is not Armstrong no...",newno);
	}
	
	return 0;
	
}
