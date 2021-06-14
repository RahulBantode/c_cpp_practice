/* Write a program using while loop 
   In which print all the natural number between 1 to n
   where n is the input which taking from the user 
*/

#include<iostream>
using namespace std;

void PrintNaturalNumbers(int number)
{
	int i = 1;
	while(i <= number)
	{
		cout<<i<<" ";	
		i++;
	}	
	cout<<"\n";
	
}

int main()
{
	int value;
	cout<<"Enter any number : ";cin>>value;
	
	cout<<"Natural Numbers are : "<<endl;
	PrintNaturalNumbers(value);
	
	return 0;
}
