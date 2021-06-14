/* Problem Statement :-
	Write a c program to convert the lowercase string to uppercase
*/

#include<iostream>
#define BASE 50
using namespace std;

void StringLowToUpp(char str[])
{
	cout<<"To UpperCase : ";
	int i;
	for(i=0; str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			int no = str[i];
			char res = char(no - 32);
			cout<<res;
		
			no = 0;
			res = '\0';
		}
		
	}
	cout<<endl;
}

int main()
{
	char str1[BASE];
	cout<<"Enter the string in lower case : ";
	cin>>str1;

	StringLowToUpp(str1);
	
	return 0;
}
