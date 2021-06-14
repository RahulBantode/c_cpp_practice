/*Swapping number without using third operator
*/

#include<iostream>
using namespace std;

int main()
{
	int a = 300, b = 60;
	
	int addition = a + b;
	int substraction = 0;
	
	if (a > b)
		substraction = a - b;
	else
		substraction = b - a;
		
	cout<<"Before swapping : "<<a<<" , "<<b<<endl;
	b = addition - b;
	a = addition - substraction;
	
	cout<<"After swapping : "<<a<<" , "<<b<<endl;	
	
	return 0;
}
