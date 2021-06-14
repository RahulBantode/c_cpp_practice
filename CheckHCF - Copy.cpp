/* problem Statement :-

	write a program to find the HCF (GCD) of the two numbers
	HCF = Highest Common factors - 
	means if you have two numbers then find the highest common factors for both numbers
*/

#include<iostream>
using namespace std;

void CheckHCF(int number1,int number2)
{
	int hcf = 0;
	int minimum = 0;
	
	//now find the minimum between two numbers
	
	if (number1 < number2)
		minimum = number1;
	else
		minimum = number2;
		
		
	for(int i =1; i <= minimum; i++)
	{
		if(number1 % i == 0 && number2 % i == 0)
			hcf = i;
	}
	
	if(hcf != 0)
		cout<<"The HCF for numbers "<<number1<<","<<number2<<" : "<<hcf<<endl;
	else
		cout<<"Their is no common factors between both the numbers"<<endl;

}

int main()
{
	int val1,val2;
	cout<<"Enter the value1 : ";
	cin>>val1;
	cout<<"Enter the value2 : ";
	cin>>val2;
	
	CheckHCF(val1,val2);
	
	return 0;
}
