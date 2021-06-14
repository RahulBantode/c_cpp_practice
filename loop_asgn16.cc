#include<stdio.h>
int main()
{
	int j=1;
	while(j<=255);
	{
		printf("%c,%d",j,j);
		j++;
	}
}

/* Nothing is printed because of semicolon after the while terminates the loop thier
it doesnt enter in the loop and j will be remains 1 because it doesnt incremented so it internally
infinetly check the condition their is no stop of this program but doesnt print any thing on monitor
but while loop goes to the infinite state*/
