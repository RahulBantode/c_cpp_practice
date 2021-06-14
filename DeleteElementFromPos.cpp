/* Problem Statement :-
	Write a program to delete the element from array at specified position
	
*/


#include<iostream>
#define BASE 50

using namespace std;

void DeleteElementFromPos(int arr[],int size)
{
	int pos = 0;
	int ch = 1;
	
		cout<<"Enter the position from where you want to delete : ";
		cin>>pos;
		
		if(pos==0 && pos > size)
		{
			cout<<"Enter valid position\n";	
		}
		else
		{
			for(int i=pos-1; i<size-1; i++)
			{
				arr[i] = arr[i+1];
			}
			size--;	
		}	
		
	cout<<"Array after element deleted  : \n";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ,";
	}
	cout<<endl;
}

int main()
{
	int arr[BASE],size;
	
	cout<<"Enter the size : ";
	cin>>size;
	
	for(int i=0; i<size; i++)
	{
		cout<<"Enter the element "<<i+1<<" : ";
		cin>>arr[i];
		
	}

	DeleteElementFromPos(arr,size);
	
	return 0;
}

