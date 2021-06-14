/*Problem Statement :-
  Write a Program to Calculate the product of digits in number
*/

#include<iostream>
using namespace std;

int ProductOfDigits(int number)
{
	int product = 1;
	
	while(number != 0)
	{
		int remainder = number % 10;
		product = product * remainder;
		number = number / 10;
	}
	
	return product;
}

int main()
{
	int value = 0;
	int result = 0;
	cout<<"Enter the number : ";
	cin>>value;
	
	result = ProductOfDigits(value);
	cout<<"The product of the number : "<<result;
	return 0;
}
