#include<stdio.h>
/*int main()
{
	int i=1;
	while(1)
	{
		printf("Inside the while");
		i++;
	}//it goes to infinite loop
}*/

/*int main()
{
	int t=0,f;
	while(t)
	{
		printf("Inside the while");
		f=1;
	}//here not entering in the loop because value enter in t is zero acc. to c zero is false so if cond. false
	//then there is no chance for while to execute it 
	//it is not goest to infinite loop
}*/

int main()
{
	int y,x=0;
	do
	{
		printf("Inside the do while");
		y=x;
	}while(x==0); //beccasue of condition returns 1 because x==0 is true so do while infinitely executed
}
