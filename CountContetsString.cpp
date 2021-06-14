/*Problem statment :-
	Write a program to count the total number of alphabets,digits and special characters in string
*/

#include<iostream>
#define BASE 50
using namespace std;

void CountTheString(char str[])
{
	int digits=0;
	int alpha = 0;
	int special = 0;
	
	int i = 0;
	while(str[i]!='\0')
	{
		if(str[i]>= '0' && str[i]<= '9')
			digits++;
		else if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
			alpha++;
		else
			special++;
	
		i++;
	}
	
	cout<<"Number of digits : "<<digits<<endl;
	cout<<"Number of alphabets : "<<alpha<<endl;
	cout<<"Number of special characters : "<<special<<endl;	
}

int main()
{
	char str[BASE];
	cout<<"Enter the string : ";
	cin>>str;
	
	CountTheString(str);
	
	return 0;
}
