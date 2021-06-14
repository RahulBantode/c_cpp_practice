#include<stdio.h>
int main()
{
	int no,pwr;
	printf("Enter the No = ");
	scanf("%d",&no);
	
	printf("Enter the power =");
	scanf("%d",&pwr);
	
	int result=1;
	for(int i=1; i<=pwr; i++)
	{
		result=result*no;
	}
	
	printf("The %d to the power %d = %d",no,pwr,result);
	return 0;
}
