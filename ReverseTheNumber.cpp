/*Problem Statement :-
	
	write a case study where accept one number from user and 
	reverse the number by your logic
	
*/
#include<iostream>
using namespace std;

int ReverseTheNumber(int number)
{
	int reverse = 0;
	
	while(number != 0)
	{
		int remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number = number / 10;
	}
	
	return reverse;
}

int main()
{
	int value , result;
	
	cout<<"Enter the Number : ";cin>>value;
	
	result = ReverseTheNumber(value);
	cout<<"Actual Number  : "<<value<<endl;
	cout<<"Reverse Number : "<<result<<endl;
}
