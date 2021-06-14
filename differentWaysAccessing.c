//Accessing the array elements by different ways

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num [] = {10,203,49,89,42,78};
	int icnt = 1;
	int size_array = sizeof(num) / sizeof(int);
	
	while(icnt < size_array)
	{
		printf("Address  : %u  ",&num[icnt]);
		printf("Elements : %d -",num[icnt]);
		printf("%d -",*(num + icnt));
		printf("%d -",*(icnt + num));
		printf("%d -",icnt[num]);
		printf("\n");
		icnt++;
	}
}
