//trace output 

#include<stdio.h>

int multiply(int **);

int main()
{
	int a = 5;
	int *aa = &a;
	
	a = multiply(&aa);
	printf("a = %d \n aa = %u \n",a,aa);
	
	return 0;
}

int multiply(int **f)
{
	int b;
	b = **f * **f;
	return b;
}
