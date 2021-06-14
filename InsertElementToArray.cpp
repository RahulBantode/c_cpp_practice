/* Problem Statement :-
	write a program insert an element in the array
*/


#include<iostream>
#define BASE 50

using namespace std;

void InsertElementToArray(int arr[])
{
	int size = sizeof(arr)/4;
	int ch = 1;
	int element = 0;
	int index = 0;
	
	while(ch == 1)
	{
		cout<<"Enter the element to insert into array : ";
		cin>>element;
		
		arr[index] = element;
		index++;
		
		cout<<"Do you want to add more ? (1-y / 0-n) :\n";
		cin>>ch;
		 
	}
	
	cout<<"Elements of array : ";
	for(int i=0; i<index; i++)
	{
		cout<<arr[i]<<" ,";
	}
	
}

int main()
{
	int arr[BASE];
	
	InsertElementToArray(arr);
	
	return 0;
}
