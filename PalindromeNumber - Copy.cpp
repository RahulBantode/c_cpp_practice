/*Problem Statement :-
	write a program which check whether the entered number by user
	is palindrome or not
	
	palindrome = The number and the reverse of that number is same then it called as palindrome
	input = 121
	reverse = 121
	then its palindrome
*/

#include<iostream>
using namespace std;

int CheckPalindrome(int number)
{
	int copynumber = number;
	int reverse = 0;
	int retBool = 0;
	
	while(number != 0)
	{
		int remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number = number / 10;
	}

	if (copynumber == reverse)
		return retBool;
	else
		retBool = 1;
		
	return retBool;
}


int main()
{
	int value;
	cout<<"Enter any number : ";cin>>value;
	
	int result = CheckPalindrome(value);
	
	if (result == 0)
		cout<<"The number is palindrome"<<endl;
	else
		cout<<"The number is not palindrome"<<endl;
		
	return 0;
	
}
