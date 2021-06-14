/*Problem Statment : -
	Write a program which accept the number from user
	and print all the prime factors of number.
*/

#include<iostream>
using namespace std;

void CheckPrimeFactors(int number)
{
	int halfNumber = number / 2;
	
	for(int i=1; i<=halfNumber; i++)
	{
		int isPrime = 1;
		if(number % i == 0)
		{
			for(int j =2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}
			
			if(isPrime == 1)
				cout<<i<<" ,";
		}
	}
}

int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	
	CheckPrimeFactors(number);
	
	return 0;
	
}
