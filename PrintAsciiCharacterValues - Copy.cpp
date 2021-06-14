/* Problem Statment :-
	Write a program to print all the ASCII character with their values

	in C++ ASCII character indexed in 0 to 127	
*/

#include<iostream>
using namespace std;

void PrintASCIICharacters()
{
	for(char i = 0; i < 127; i++)
	{
		cout<<(int)i<<"--"<<i<<endl;
	}
}

int main()
{	
	PrintASCIICharacters();
	
	return 0;
}
