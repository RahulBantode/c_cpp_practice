//pointer concept -

#include<stdio.h>

int main()
{
	int i = 3; //regular variable declaration
	
	int *j = &i;  //here the *j is pointer variable which stores the address of i;
	
	printf("Now see the variations : \n");
	printf("Value of i : %d\n",i);
	printf("Address of i : %d\n",&i);
	printf("---------------------------\n");	
	
	printf("Value of j : %d\n",j);
	printf("Address of j : %d\n",&j);
	printf("---------------------------\n");
	
	printf("Value of i : %d\n",*(&i)); // print i is same as print *(&i)
	printf("Value of i : %d\n",*j);
	return 0;
}
