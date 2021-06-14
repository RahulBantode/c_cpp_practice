/*
	Problem Statement :-
	write a program to find the power of the number 
	using for loop
	
	input  = 10^3 
	output = 1000
	
*/
#include<iostream>
using namespace std;

int CheckPowerOfNumber(int number,int power)
{
	int product = 1;
	
	for(int i = 0; i<power; i++)
	{
		product = product * number;
	}
	
	return product;
}

int main()
{
	int number = 0;
	int powNum = 0;
	int result = 0;
	
	cout<<"Enter the number : ";cin>>number;
	cout<<"Enter how much power : ";cin>>powNum;
	
	result = CheckPowerOfNumber(number,powNum);
	cout<<"Power of the number "<<number<<" : "<<result<<endl;
	
	return 0;
}
