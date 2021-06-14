/*Problem Statement
	write a program to count the frequency of the each digit
	in the number : 11234
	frequency 1 = 2
	frequency 2 = 1
	etc
	
*/

#include<iostream>
#define BASE 10 
using namespace std;

void PrintFrequencyOfNumber(int number)
{
	int copyNumber = number;
	int frequency[BASE]; //its a frequency array
	int lastDigit;
	int i;
	
	//now initialize the frequency array with zero so BASE = 10 then 
	//zero is placed in continuous memory of array
	for(i=0; i<BASE; i++)
	{
		frequency[i] = 0;
	}
	
	while(number != 0)
	{
		//now get the lastDigit
		lastDigit = number % 10;
		
		//now increment the frequency array with lastDigit, means here last digit is the key
		//and on that key we increment value by 1
		frequency[lastDigit]++;
		
		//now get the new last digit by dividing
		number = number / 10;
	}
	
	
	cout<<endl;
	cout<<"Frequency of the number : "<<copyNumber<<endl;
	cout<<"-------------------------------------------------\n";
	for(i = 0; i<BASE; i++)
	{
		if(frequency[i] != 0)
			cout<<"Frequency of "<<i<<" : "<<frequency[i]<<endl;
	}
		
}

int main()
{
	int number = 0;
	cout<<"Enter the number : ";
	cin>>number;
	
	PrintFrequencyOfNumber(number);
	
	return 0;
}
