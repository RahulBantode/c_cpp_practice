//Problem Statement :-
	//write a program to copy one string to another string
	
#include<iostream>
#define BASE 50
using namespace std;

void CopyString(char str1[],char str2[])
{
	int i;
	for(i=0; str1[i]!='\0'; i++)
	{
		str2[i]=str1[i];
	}
	
	str2[i]='\0';  //this is very important to terminate the copied string with null termination as \0
	               //if you are not doing this then garbage value also copied into it.
	cout<<"Entered String are : "<<str1<<endl;
	cout<<"Coppied string are : "<<str2<<endl;
}

int main()
{
	char str1[BASE],str2[BASE];
	cout<<"Enter the string : ";
	cin>>str1;
	
	CopyString(str1,str2);
	
	return 0;
}
