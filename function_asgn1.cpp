#include<stdio.h>
void caller();

int main()
{
	printf("I am in the main...");
	caller();
	//main();	 we can call it also this type but it goes to also infinite loop
	return 0;
}

void caller()
{
	printf("I am in the caller");
	main();
}//this also goes to infinite loop
