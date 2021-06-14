#include<stdio.h>
int main()
{
	int ch=0; //we can take it as char but proble in the incrementation phase because increment operator used on character
			  // data type gives an ambiguous result
	
	while(ch<=255)
	{
		printf("ASCII value of Character %c = %d\n",ch,ch);
		ch++;
	}
	return 0;
}

//printing the ascii value of character with equivallent char.
