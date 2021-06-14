/* Problem statement 
	write a program to find the sum of all Even numbers
	between ( 1 to n)
	where n is the input from user
	note :- the problems has to solve by using while loop
*/

#include<iostream>
using namespace std;

int SumEven(int no)
{
	int sum = 0;
	int i = 1;
	while(i <= no)
	{
		if(i%2 == 0)
		{
			sum = sum + i;
		}
		i = i + 1;
	}
	
	return sum;
}

int main()
{
	int number,result;
	cout<<"Enter the Number : ";
	cin>>number;
	
	result = SumEven(number);
	cout<<"The addition of the number : "<<result<<endl;
	
	return 0;
}
