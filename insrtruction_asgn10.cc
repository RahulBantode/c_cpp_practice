//prog to accept four digit from user and print the addition of first and last digit

#include<stdio.h>

int main()
{
	int  no,numchek;
	int cnt=0;
	printf("Enter the Four digit no ");
	scanf("%d",&no);
	int first_digit,last_digit;
	int sum;
	numchek=no;
	for(int i=0; i<4; i++)
	{
		while(numchek>0)
		{
			numchek=numchek/10;
			cnt++;
		}
	}
	
	
	if(cnt==4)
	{
		printf("The entered no. is digit four please continued....\n\n");
		
		last_digit=no%10;
		
		first_digit=(no/1000)%10;
		
		sum=last_digit+first_digit;
		
		printf("The sum of first and last digit of the four digit no = %d",sum);
		
	}
	else
	{
		printf("Please enter four digit no...");
	}
}
