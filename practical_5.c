//tracce output

#include<stdio.h>

struct my_structure
{
	int i;
	char ch;
	float j;
	double o;
};

int main()
{
	/*
	int i =10;
	printf("Value of i = %d ... Address of i = %u\n",i,&i);
	
	&i = 7200; --> It gives an error
	printf("Value of i = %d ... Address of i = %u\n",i,&i);
	*/
	
	double j;
	printf("size of double : %d ",sizeof(j));
	struct my_structure obj;
	printf("Size of : %d \n",sizeof(obj));	
	return 0;
}
