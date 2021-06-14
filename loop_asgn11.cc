#include<stdio.h>
int main()
{
	int no;
	printf("Enter the no= ");
	scanf("%d",&no);
	
	int newno=no;
	int rem=0;
	
	while(no!=0)
	{
		rem=no%8; ///impure logic progrm not complete
		
		no=no/8;		
	}
	
	int rev=0;
	int rem2=0;
	
	while(rem!=0)
	{
		rem2=rem%10;
		rev=rev*10+rem2;
		rem=rem/10;
	}
	
	printf("The octal Equivalent of %d = %d",newno,rev);
	
	return 0;
	
}
