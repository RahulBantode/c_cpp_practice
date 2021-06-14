//prog to accept five digit from user and print the reverse of that digit
#include<stdio.h>

int main()
{
	int no,numchek,rem,rev;
	rev=0;
	printf("Enter the five digit no= ");
	scanf("%d",&no);
	int cnt=0;
	numchek=no;
	
	for(int i=1; i<=5; i++)
	{
		while(numchek>0)
		{
			numchek =numchek/10; //this logic for digits of num entered only or not
			cnt++;
		}
	}
	
	
	if(cnt==5)
	{
		printf("The digits of no.is valid\n");
			while(no>0)
			{
				rem=no%10;
				rev=rev*10+rem;
				no=no/10;
			}
		printf("The reverse of digits = %d",rev);
	}
	else
	{
		printf("The digits of no. is not valid\n");
	}
}
