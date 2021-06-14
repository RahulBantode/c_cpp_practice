#include<stdio.h>
int main()
{
	int k;
	float j=2.0;
	switch(k=j+1)
	{
		case 3:
			printf("\n I am in case 3");
			break;
			
		default:
			printf("\n I am in case default");
			
	}
	return 0;
}

/*output
I am in case 3

now you have question that case float is not allowed then here also this principle are followed
the data types of the k is int .. and the data type of j is float so now j+1 will become 3.0
but k is int so it implicitly converted float to int so it will be int case so it can work 

*/
