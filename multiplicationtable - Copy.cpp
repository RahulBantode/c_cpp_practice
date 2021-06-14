/* Problem statement to print the multiplication table of any number
	using for loop
*/
#include<iostream>
using namespace std;

void PrintMultiplicationTable(int no)
{
	for(int i =1; i<=10; i++)
	{
		cout<<" "<<i*no<<endl;
	}
}

int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	
	cout<<"The multiplication table : "<<endl;
	PrintMultiplicationTable(number);
	
	return 0;
}
