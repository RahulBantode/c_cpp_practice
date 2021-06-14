#include<stdio.h>
int main()
{
	int i=10, j=20;
	
	if(i=5) && if(j=10) //error comes here expected identifier before second if because if is comes with else or 
						//some statements we not compare to if statements by this operator to solove this problem
						//use if(i=5 && j=10) then it gives an answer
		printf("Rahul Bantode");
		
	return 0;
}
