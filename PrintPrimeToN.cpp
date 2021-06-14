/*Problem statement :-
	Write a program which accept upper limit from user
	and print all the prime number between them
	i.e - 1 to N
*/

#include<iostream>
using namespace std;

void PrintAllPrimeToN(int upperLimit)
{
	int i;
	
	
	for(i = 1; i <= upperLimit; i++)
	{
		int retBool = 1;
		
		int halfNumber = i / 2;
		int j = 2;
		while(j <= halfNumber)
		{
			if( i % j == 0)
				retBool = 0;
				break;	
			j++;
		}
		
		if(retBool == 1)
			cout<<i<<" , ";
	}
	cout<<"\n";
}

int main()
{
	int upperLimit;
	cout<<"Enter the upper limit : ";
	cin>>upperLimit;

	PrintAllPrimeToN(upperLimit);
	
	return 0;
}
