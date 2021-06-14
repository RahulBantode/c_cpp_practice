#include<stdio.h>
void caller();
void receiver();
void rahul();
int main()
{
	printf("I am in the main \n");
	caller();
	//rahul();
	return 0;
}

void caller()
{
	printf("I am in the caller \n");
	receiver();
}

void receiver()
{
	printf("I am in the receiver \n");
}

/* output=
I am in the main
I am in the caller
I am in the receiver

here we follow the concept of inside one function we can call another function

NOTE but inside the function we 	"WE CAN'T DEFINE THE OTHER FUNCTION" See as bellow


void rahul()
{
	void msg()
	{
		printf("I am in the msg ");
	}
	printf("I am in the rahul");
}
[Error] a function-definition is not allowed here before '{' token
*/
