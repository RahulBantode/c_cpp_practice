/*Problem statement :-
	write a C program to print all the natural numbers in reverse order
	using while loop
*/


#include<iostream>
using namespace std;

void PrintNaturalNumbers(int number)
{
	int i = number;
	while(i > 0)
	{
		cout<<i<<" ";	
		i--;
	}	
	cout<<"\n";
	
}

int main()
{
	int value;
	cout<<"Enter any number : ";cin>>value;
	
	cout<<"Natural Numbers in Reverse order are : "<<endl;
	PrintNaturalNumbers(value);
	
	return 0;
}
