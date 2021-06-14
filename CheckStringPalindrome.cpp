/*Problem Statement:-
	Check whether entered string are palindrome or not
*/

#include<iostream>
#include<string.h>
#define BASE 50

using namespace std;

void CheckStringPalindrome(char str[])
{
	char copyStr[BASE];
	char rev[BASE];
	
	strcpy(copyStr,str);
	
	
	int length = strlen(str);
	int i;
	int index=0;

	//length-1 = because string terminates with \0 , so this will directly copied into it and display none in string.
	for(i=length-1; i>=0; i--)
	{
		rev[index] = str[i];
		index++;
	}
	
	if(strcmp(rev,copyStr)==0)
		cout<<"Entered string are palindrome\n";
	else
		cout<<"Entered string are not palindrome\n";
	
}

int main()
{
	char str[BASE];
	cout<<"Enter the string : ";
	cin>>str;
	
	CheckStringPalindrome(str);
	
	return 0;
}
