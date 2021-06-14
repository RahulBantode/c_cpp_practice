/*Problem statement : -
	Write a program to find the first and last digit of number
*/

#include<iostream>
using namespace std;

void FindFirstLastDigit(int number)
{
	int first = 0;
	int last  = number % 10;
	first = number;
	
	while(first >= 10)
	{
		first = first / 10;
	}
	
	cout<<"The first digit of the number : "<<first<<endl;
	cout<<"The last digit of the number  : "<<last<<endl;

}

int main()
{
	int number = 0;
	cout<<"Enter the number : ";
	cin>>number;
	
	FindFirstLastDigit(number);
	
	return 0;
}
