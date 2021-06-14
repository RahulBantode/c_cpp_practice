/*Problem Statment :-
	write a program to check whether
	entered number is Armstrong or not
	
	input = 153
	operation = 1^3 + 5^3 + 3^3
	          = 1 + 125 + 27
	          = 153
	          
	The cube addition of each digit in number is equal to the original number called as armstrong number
	
*/

#include<iostream>
#include<math.h>
using namespace std;

void CheckArmstrong(int number)
{
	int copyNumber = number;
	int cubeAddition = 0;
	
	while(copyNumber != 0)
	{
		int remainder = copyNumber % 10;
		cubeAddition = cubeAddition + (int)pow(remainder,3);
		copyNumber = copyNumber / 10;
	}
	
	
	if(number == cubeAddition)
		cout<<"Number is Armstrong\n";
	else
		cout<<"Number is not Armstrong\n";

}

int main()
{
	int number ;
	cout<<"Enter the number : ";
	cin>>number;
	
	CheckArmstrong(number);
	
	return 0;
	
}
