/*Problem Statement :-
	Write a program to concatenate the two string.
*/

#include<iostream>
#define BASE 50
using namespace std;

void ConcatenateString(char str1[],char str2[])
{
	int i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	
	for(int j=0; str2[j]!='\0'; j++)
	{
		str1[i] = str2[j];
		i++;
	}
	
	str1[i]='\0'; //here terminate the concatenated first string to \0
	
	cout<<"String after concatenation : "<<str1<<endl;
}

int main()
{
	char str1[BASE],str2[BASE];
	cout<<"Enter the string 1 : ";cin>>str1;
	cout<<"Enter the string 2 : ";cin>>str2;
	
	ConcatenateString(str1,str2);
	
	return 0;
}
