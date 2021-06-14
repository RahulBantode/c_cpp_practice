#include<stdio.h>

void display(int *);
void show(int **);

int main()
{
	int i;
	int marks[] = {23,45,88,99,42};
	for(i=0; i<sizeof(marks)/4; i++)
	{
		display(&marks[i]);
	}
	
	return 0;
}

void display(int *no)
{
	show(&no);
}

void show(int **num)
{
	printf("%u - %d\n",*num,**num);
}
