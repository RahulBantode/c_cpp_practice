/* problem statement :-
	
	Write a program to print the odd numbers between (1 to 100)
	using while loop
*/
#include<iostream>
using namespace std;

void PrintOdd()
{
	int i = 1;
	while(i <= 100)
	{
		if(i % 2 != 0)
			cout<<i<<" ";
			
		i++;
	}
	cout<<endl;
}
int main()
{
	cout<<"Even numbers between (1 to 100) are :"<<endl;
	PrintOdd();
	
	return 0;
}
