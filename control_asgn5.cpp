#include<stdio.h>
int main()
{
	int ch='a'+'b';
	switch(ch)
	{
		case 'a':
		case 'b':
			printf("\n I m in case a and b");
			
		case 'A':
			printf("\n I m in case A");
			
		case 'b'+'a':
			printf("\n I am in addition of case a and case b= %d",ch);
	}
	return 0;
}

/*
op=
I m in addition of case a and case b=195 */

