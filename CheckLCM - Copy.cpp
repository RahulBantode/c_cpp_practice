/*Problem Statement :-

	Write a program to find the LCM of two numbers

	LCM - LCM stands for Lowest common multiple 
		  LCM is the smallest - Lowest Common Multiple 
		  the smallest divisor which exactly divides two numbers.
		  
*/

#include<iostream>
using namespace std;

void CheckLCM(int number1,int number2)
{
	int max = 0;
	int LCM = 0;
	if (number1 > number2)
		max = number1;
	else
		max = number2;
		
	int i = max;
	
	while(1)
	{
		if( i % number1 == 0  &&  i % number2 == 0)
		{
			LCM = i;
			break;
		}
		
		i = i+max;
	}
	
	cout<<"The LCM : "<<LCM<<endl;
}

int main()
{
	int number1,number2;
	cout<<"Enter the number 1 : ";
	cin>>number1;
	cout<<"Enter the number 2 : ";
	cin>>number2;
	
	CheckLCM(number1,number2);
	
	return 0;
	
}
