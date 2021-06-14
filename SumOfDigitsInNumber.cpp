/*Problem Statement :-
	Write a program to calculate the sum of digits in the numbers
	
	input =  1234
	output = 10

*/

#include<iostream>
using namespace std;

int SumOfDigitsInNumber(int number)
{
	int sum = 0;
	
	while(number != 0)
	{
		int remainder = number % 10;
		sum = sum + remainder;
		number = number / 10;
	}
	
	return sum;
}

int main()
{
	int value = 0;
	int result = 0;
	cout<<"Enter the value : ";
	cin>>value;
	
	result = SumOfDigitsInNumber(value);
	cout<<"Addition of the digits : "<<result<<endl;
	
	return 0;
}
