/*Problem statement -
	write a program to find the sum of the first and last digit of 
	number
*/

#include<iostream>
using namespace std;


int SumOfFL(int number)
{
	int first = 0 ,last = 0;
	
	int sum = 0;
	
	last = number % 10;
	
	first = number;
	
	while(first >= 10)
	{
		first = first / 10;
	}
	
	sum = first + last;
	
	return sum;
}

int main()
{
	int number , result;
	
	cout<<"Enter the number : ";
	cin>>number;
	
	result = SumOfFL(number);
	
	cout<<"Sum of the first and last digit of number : "<<result;
	
	return 0;
}
