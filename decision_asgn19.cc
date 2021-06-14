#include<stdio.h>
int main()
{
	int j=65;
	printf("j>=65?%d:%c",j); //op is j>=65?65: they not chek condtion because its enclosed in pair of " " which consider 
							 //to be string 
	//int ||=20; error comes expected primary expression before || because its an operator which not taken as var. name
	//printf("%d",||); 
	return 0;
}
