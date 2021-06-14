//tracing the output - where I am passing the arguments to function in mixed ways like call by value or refference both
/* 
In this case we are passing fist argument as value and second argument as the address of that variable
and our function not return any value using return statements

So our question is no2 is updated after calling the function and no1 not why it is happen ?

So when you are passing as value then the actual parameter value get copied into the formal parameter
so whatever changes done inside the function it applicable only for the formal paramter not actual thats why no1 not
updated

in second case we are passing the address of the actual parameter means now the memory is once but the pointer points
to that memory locations are two, thats why the modification made inside the function are applicable inside the main function
tooo.
*/
#include<stdio.h>

void reflection(int , int *);

int main()
{
	int no1 = 10;
	int no2 = 20;
	
	printf("No_1 : %d\n",no1);
	printf("No_2 : %d\n",no2);
	printf("--------------------------\n");
	reflection(no1,&no2);
	printf("After calling the function \n");
	printf("No_1 : %d\n",no1);
	printf("No_2 : %d\n",no2);
	
	return 0;	
}

void reflection(int no1,int *no2)
{
	no1 = no1 * no1;
	*no2 = *no2 + *no2;
}
