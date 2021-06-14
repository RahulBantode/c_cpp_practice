/* Problem Statement :-
	Write a program which accept one number from user and
	then check whether number is prime or not
*/

#include<iostream>
using namespace std;

int CheckPrime(int number)
{
	int halfNumber = number/2;
	int retBool = 0;
	
	int i=2;
	
	while(i <= halfNumber)
	{
		if(number % i == 0)
			retBool = 1;
			break;
		
		i=i+1;
	}

	if (retBool == 1)
		return 1;
	else
		return 0;
}

int main()
{
	int number,result;
	
	cout<<"Enter the number : ";
	cin>>number;
	
	result = CheckPrime(number);
	
	if(result == 0)
		cout<<"Number is Prime"<<endl;
	else
		cout<<"Number is not prime"<<endl;
		
	return 0;
}
