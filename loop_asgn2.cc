#include<stdio.h>
int main()
{
	int x=4;
	while(x==1) //condition get false for that purpose doesnt print anything it doesnt enter in the loop
	
	{
		x=x-1;
		printf("%d",x);
		x--;
	}
	
	int i;
	while(i=10)
	{
		printf("%d\n",i);
		i++; //goes in infinite loop because everytime i is assign to 10 after incrementing also
	}
	return 0;
}
