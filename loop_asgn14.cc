#include<stdio.h>
int main()
{
	int i=1,j=1;
	
	for(; ;)
	{
		printf("Inside the loop\n");
		if(i>5)
			break;
		else
			j+=i;
			
		printf("%d\n",j);
		i=i+j;
		return 0;
	}
}

/* It will prints 
inside the loop
2
 becuase of return 0 
 anc condtion becomes false so it comes to the else part
 
 for(; ;)
 hyat kahich lihl nsl trihi kahich frk pdt nahi to for loop mdhe entry krtoch
 */
