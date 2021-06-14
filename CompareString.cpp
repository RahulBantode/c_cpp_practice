/*Problem statement :-
	Write a program to compare two string
	
*/

#include<iostream>
#include<string.h>
#define BASE 50

using namespace std;

int CompareString(char str1[],char str2[])
{
	int i=0;
	int retbool = 0;
	
	while(str1[i]!=0 && str2[i]!=0)
	{
		if(strlen(str1) < strlen(str2))
		{
			cout<<"Strings are not equal"<<endl;
			return 0;
		}
		
		if(strlen(str2) < strlen(str1))
		{
			cout<<"Strings are not equal"<<endl;
			return 0;
		}
		else
		{
			if(str1[i] != str2[i])
			{
				retbool = 1;
				break;
			}
		}
		i++;
	}

	if(retbool == 0)
		cout<<"String are equal"<<endl;
	else
		cout<<"String are not equal"<<endl;
	
	return 0;		
}

int main()
{
	char str1[BASE],str2[BASE];
	cout<<"Enter the string1 : "; cin>>str1;
	cout<<"Enter the string2 : "; cin>>str2;
	
	int result = CompareString(str1,str2);
	
}
