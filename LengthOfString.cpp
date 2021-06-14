//Problem statement :- Write a string program to find the length of string

#include<iostream>
using namespace std;

int LengthOfString(char str[])
{
	int icnt;
	for(int i=0; str[i]!='\0'; i++)
	{
		icnt++;
	}
	return icnt;
}

int main()
{
	char str[50];
	cout<<"Enter the string : ";
	cin>>str;
	
	int length = LengthOfString(str);
	cout<<"Length of string : "<<length<<endl;
	return 0;
}
