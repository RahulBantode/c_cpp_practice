/*Problem statement :-
	Write a program which accept upper limit from user
	and print sum of all the prime number between them
	i.e - 1 to N
*/

#include<iostream>
using namespace std;

int PrintSumOfAllPrimeToN(int upperLimit)
{
	int i;
	int sum = 0;
	
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
			sum = sum + i;
	}
	
	return sum;
}

int main()
{
	int upperLimit;
	cout<<"Enter the upper limit : ";
	cin>>upperLimit;

	int result = PrintSumOfAllPrimeToN(upperLimit);
	
	cout<<"Sum of prime number : "<<result;
	return 0;
}
