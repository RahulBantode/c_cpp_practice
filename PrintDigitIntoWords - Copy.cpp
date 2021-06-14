/*Problem Statement: -
	write a program where take input from user as one number and then print
	it in words.
	
	input = 1231
	output= one two three one
		
*/

#include<iostream>
using namespace std;

void PrintDigitIntoWords(int number)
{
	int copyNumber = number;
	int reverse = 0;
	//first reverse the number for appropriate output
	while(copyNumber != 0)
	{
		int remainder = copyNumber % 10;
		reverse = reverse * 10 + remainder;
		copyNumber = copyNumber / 10;
	}
	
	while(reverse != 0)
	{
		int value = reverse % 10;
		
		switch(value)
		{
			case 0 : cout<<"zero "; break;
			
			case 1 : cout<<"one "; break;
			
			case 2 : cout<<"two ";break;	
			
			case 3 : cout<<"three ";break;
			
			case 4 : cout<<"four ";break;
			
			case 5 : cout<<"five ";break;
			
			case 6 : cout<<"six ";break;
			
			case 7 : cout<<"seven ";break;
			
			case 8 : cout<<"eight ";break;
			
			case 9 : cout<<"nine ";break;
		}
		
		reverse = reverse / 10;
	}
	
}

int main()
{
	int number = 0;
	cout<<"Enter the number : ";
	cin>>number;
	
	PrintDigitIntoWords(number);
	
	return 0;
}
