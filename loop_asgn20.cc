#include<stdio.h>
int main()
{
	int no=20;
	
	int px=no;
	int py=no;
	
	int i,j;
	
		for(i=1; i<no; i++)
		{
			for(j=1; j<no*2; j++)
			{
				if(j>px && j<py)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			px--;
			py++;
			printf("\n");
		}
}
