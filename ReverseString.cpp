/*Problem Statement :-
	Write a program to find the reverse of the string
*/

#include<iostream>
#include<string.h>
#define BASE 50
using namespace std;

void ReverseString(char str[],char rev[])
{
	int length = strlen(str);
	int i;
	int index=0;

	//length-1 = because string terminates with \0 , so this will directly copied into it and display none in string.
	for(i=length-1; i>=0; i--)
	{
		rev[index] = str[i];
		index++;
	}
	
	rev[index]='\0';
	cout<<"Reverse String are : "<<rev<<endl;
	
}

int main()
{
	char str[BASE],rev[BASE];
	cout<<"Enter the string : ";
	cin>>str;
	
	ReverseString(str,rev);
	
	return 0;
}
