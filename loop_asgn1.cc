#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10) //op-doesnt print anything becuase this statement while(i<=10); 
				 //semicolon end the while here so it not go inside the body
	{
		printf("%d\n",i);
		i=i+1;
	}
	
	float x=1.1;
	while(x<5.1)//its valid its not neccesary to loop counter must be int. I can be a float also
	{
		printf("%f\n",x);
		x=x+1.0;
	}
}


