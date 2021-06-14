/*Problem Statement :-
	Write a program to toggle case of each character of a string.
	
*/

#include<iostream>
#define BASE 50
using namespace std;

void ToggleTheCase(char str[])
{
	cout<<"Toggle case of string : ";
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
		else if(str[i]>=65 && str[i]<= 97)
		{
			int no = str[i];
			char res = char(no + 32);
			cout<<res;
		
			no = 0;
			res = '\0';
		}
		
	}
	cout<<endl;
}

int main()
{
	char str[BASE];
	cout<<"Enter the string : ";
	cin>>str;
	
	ToggleTheCase(str);
	return 0;
	
}
