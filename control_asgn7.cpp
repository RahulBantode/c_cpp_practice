#include<stdio.h>
int main()
{
	int a=3,b=4,c;
	c=b-a;
	
	switch(c)
	{
		case 1 || 2:
			printf("\n Rahul Bantode from India"); break; //its successfully run 
			
		//case 1 < 2:
		//	printf("\n Rahul Bantode from India"); break; //its successfully run 
			
		//case a || b:
		//	printf("\n Nitin Choudhary from India"); error comes that a and b are cannnot appear in constant expression
		
		default:
			printf("/n I am in the default");
	}
	return 0;
	
}

/*
Note:- If the duplicate case value is appear in switch case it will consider the first occurence of the duplicate case
and gives an error for next duplicate case values 

*/
