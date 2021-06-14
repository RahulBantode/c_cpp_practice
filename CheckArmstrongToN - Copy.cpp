/*Problem Statement :-
	Write a program to check Number is Armstrong or not
	between 1 to N

*/

#include<iostream>
#include<math.h>
using namespace std;

void CheckArmstrongToN(int upperLimit)
{
	for(int i=2; i<=upperLimit; i++)
	{
		int copy = i;
		int noDigit = (int) log10(i) + 1;
		int armstrong = 0;
		
		while(i > 0)
		{
			int remainder = i % 10;
			armstrong = armstrong + (int)pow(remainder,noDigit);
			i = i / 10;
		}
		
		if(copy == armstrong)
			cout<<copy<<" , ";	
	}
	cout<<"\n";

}
int main()
{
	int upper;
	cout<<"Enter the upper limit : ";
	cin>>upper;
	
	CheckArmstrongToN(upper);
	
	return 0;
}
