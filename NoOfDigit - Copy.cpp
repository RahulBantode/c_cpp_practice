/*
	Problem Statement :-
	Write a program to count the number of digits in the program
	
*/

#include<iostream>
using namespace std;

int NumOfDigit(int number)
{
	int counter = 0;
	
	while(number != 0)
	{
		int rem = number % 10;
		number = number / 10;
		counter++;
	}
	
	return counter;
}

int main()
{
	int num = 0;
	int result = 0;
	
	cout<<"Enter the number : ";
	cin>>num;
	
	result = NumOfDigit(num);
	cout<<"The number of digits in number are : "<<result<<endl;
	
	return 0;
}
