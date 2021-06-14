#include<stdio.h>
int main()
{
	int i=1;
	switch(i-2)
	{
		case -1:
			printf("\n Feeding fshin");
		
		case 0:
			printf("\n Weeding grass");
			
		case 1:
			printf("\n Mendoing roo");
			
		default:
			printf("\n Just to survive");
	}
	
	return 0;
}
/*output

 Feeding fshin
 Weeding grass
 Mendoing roo
 Just to survive
 
 condition is int there is no worry about its positive or int compiler work very well
 
 and here only 1st case is satisfy and remaining are executed because of one satisfy then all are remaing executed
 in switch so to overcome this problem you use break keyword after the case which will jump your control to next case
 */
