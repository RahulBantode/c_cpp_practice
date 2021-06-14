//Demonstration of call by value and call by refference :-

#include<stdio.h>

int call_by_value(int,int);
int call_by_refference(int *,int *);

int main()
{
	int no1 = 80;
	int no2 = 20;
	
	int result1 = call_by_value(no1,no2);
	printf("Addition from call by values : %d\n",result1);
	
	int result2 = call_by_refference(&no1,&no2);
	printf("Substraction from call by refference : %d\n",result2);	
}

int call_by_value(int a,int b)
{
	return a+b;
}

int call_by_refference(int *a,int *b)
{
	return (*a)-(*b);
}
