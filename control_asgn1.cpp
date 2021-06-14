#include<stdio.h>
int main()
{
	char suit=3;
	switch(suit)
	{
		case 1:
			printf("Diamond\n");
		
		case 2:
			printf("Spade\n");
			
		default:
			printf("I m in default");
	}
	printf("\n\nThe statement outside the switch ");
	
	return 0;
}
/*op-
I m in default

The statement outside the switch

because case not found the matching statement thats why it will print defaualt and after the end of switch
the remaing statment are printed*/
