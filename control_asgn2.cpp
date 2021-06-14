#include<stdio.h>
int main()
{
	int suit=3;
	switch(suit)
	{
		case '3':
			printf("\n I m in the single quoted 3");
		case 3:
			printf("\n I am in the without quoted 3");
			
		default:
			printf("\n I am in the default");
			
	}
	return 0;
	
}
/* OP-

 I am in the without quoted 3
 I am in the default .... this line is printed beause switch are printed the lines where its case found then entire 
 remaining line after the match case are printed.... but it is not perfect output... output is only print the match 
 case so then you have to use break keyword to resolve this problem
 
 
*/
