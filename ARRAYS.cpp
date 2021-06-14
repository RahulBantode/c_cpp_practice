/* Problem Statement :- Write a Program to read and print the elements of array */


#include<iostream>
#define MAX 50
using namespace std;


void AcceptPrintArray(int arr[],int size)
{
	cout<<"Enter the elements for array : "<<endl;
	int i;
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Array elements : "<<endl;
	
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ,";
	}
	cout<<endl;
}

int main()
{
	int arr[MAX];
	int size;
	
	cout<<"Enter the size of array : ";
	cin>>size;
	
	AcceptPrintArray(arr,size);
	
	return 0;
}
