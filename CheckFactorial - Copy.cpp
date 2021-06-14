/*Problem Statement : -
	Write a program to calculate the Factorial of number 

	input  = 5
	output = 1 * 2 * 3 * 4 * 5 = 120	
*/

#include<iostream>
using namespace std;

int CheckFactorial(int number)
{
	int factorial = 1;
	int i = 1;
	
	while(i <= number)
	{
		factorial = factorial * i;
		i = i + 1;
	}
	
	return factorial;
}

int main()
{
	int number = 0;
	int result = 0;
	cout<<"Enter the number :";
	cin>>number;
	
	result = CheckFactorial(number);
	cout<<"Factorial of "<<number<<" : "<<result<<endl;
	
	return 0;
}
