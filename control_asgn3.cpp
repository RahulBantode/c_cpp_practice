#include<stdio.h>
int main()
{
	int i=3;
	switch(i)
	{
		case 0:
			printf("\n I am in case 0");
		case 0+1:
			printf("\n I am in case 1");
		case 4/2:
			printf("\n I am in case 2");
		case 8%5:
			printf("\n I am in case 3");
	}
	return 0;
}
//op= I am in case 3... because the expression also valid in declaring the case it wont give an error
//only the float datatype of values or case are voilencen
