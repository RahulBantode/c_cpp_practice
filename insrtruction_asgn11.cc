//prog to accept five digit no and add individually one in each digit like 12345 == 23456
#include<stdio.h>

int main()
{
	int sum,no,one,two,three,four,five;
	
	printf("Enter the five digit no = ");
	scanf("%d",&no);
	
	one=no%10;
	two=(no/10)%10;
	three=(no/100)%10;
	four=(no/1000)%10;
	five=(no/10000)%10;
	
	sum=(one+1)+(two+1)*10+(three+1)*100+(four+1)*1000+(five+1)*10000;
	
	
	printf("The addition is =%d",sum);
	
	return 0;
}
