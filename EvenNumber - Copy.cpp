/* problem statement :-
	
	Write a program to print the even numbers between (1 to 100)
	using while loop
*/
#include<iostream>
using namespace std;

void PrintEven()
{
	int i = 1;
	while(i <= 100)
	{
		if(i % 2 == 0)
			cout<<i<<" ";
			
		i++;
	}
	cout<<endl;
}
int main()
{
	cout<<"Even numbers between (1 to 100) are :"<<endl;
	PrintEven();
	
	return 0;
}
