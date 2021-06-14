/*Problem statement :-
	Write a program to find the factors of Numbers
*/

#include<iostream>
using namespace std;

void CheckFactors(int number)
{
	int halfofNumber = number / 2;
	
	cout<<"Factors of number "<<number<<" : ";
	for(int i=1; i <= halfofNumber; i++)
	{
		if(number % i == 0)
			cout<<i<<" ";	
	}	
	cout<<endl;
}

int main()
{
	int number = 0;
	cout<<"Enter the number : ";
	cin>>number;
	
	CheckFactors(number);
	
	return 0;
}
