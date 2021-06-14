#include<stdio.h>
int main()
{
	int code,flag;
	//here we not assign value to code and flag but still op is given as condition false therefore
	//if the value is not assign then it take it as 0
	if(code==1 && flag==0)
		printf("Condition true");
		
	else
		printf("Condition false");
}
