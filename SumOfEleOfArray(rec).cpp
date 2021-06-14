/*Problem Statement :-
	Write a program to find the sum of numbers in array using recursion
*/


#include<iostream>
#define MAX 50
using namespace std;

int sum = 0;
int SumElementOfArray(int arr[],int size)
{
	if(size > 0)
	{
		sum = sum + arr[size];
		size--;
		SumElementOfArray(arr,size);
	}
	return sum;
}
int main()
{
	int arr[MAX],size;

	cout<<"Enter the size  : ";cin>>size;
	
	cout<<"Enter the elements into array : ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	int addition = SumElementOfArray(arr,size);
	cout<<"Addition of elements : "<<addition<<endl;
	
	return 0;
}
