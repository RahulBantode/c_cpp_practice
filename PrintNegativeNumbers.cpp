/*Problem Statement :-
		Write a program to print all the negative numbers in the array
*/

#include<iostream>
#define MAX 50
using namespace std;

void PrintNegativeNumbers(int arr[],int size)
{
	int i;
	
	cout<<"Negative numbers are : \n";
	for(i=0; i<size; i++)
	{
		if(arr[i] < 0)
			cout<<arr[i]<<" ,";
	}
	cout<<endl;
	
}

int main()
{
	int arr[MAX],size;
	
	cout<<"Enter the size of array : ";
	cin>>size;
	
	cout<<"Enter the elements into array : \n";
	for(int i=0; i<size; i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	PrintNegativeNumbers(arr,size);
	
	return 0;
		
}
