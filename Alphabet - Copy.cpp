/*Problem Statement :-
	Write a C program to print all the alphabets 
	using while loop
*/

#include<iostream>
using namespace std;

void PrintAlphabet()
{
	char var = 'a';
	
	while(var <= 'z')
	{
		cout<<var<<" ";
		var++;
	}
}

int main()
{
	cout<<"The alphabets are : "<<endl;
	PrintAlphabet();
	
	return 0;
}
