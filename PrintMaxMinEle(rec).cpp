/*Problem Statement :-
	Write a c program to find the maximum and minimum elements from array 
	using recursion
*/

#include<iostream>
#define BASE 50
using namespace std;

int maximum = 0;
int minimum = 0;

int PrintMax(int arr[],int size)
{
	if(size >= 0)
	{
		if(arr[size] > arr[size-1])
		{
			if(maximum < arr[size])
				maximum = arr[size];	
		}	
		size--;
		PrintMax(arr,size);	
	}
	
	return maximum;
}

int PrintMin(int arr[], int size)
{
	if(size > 0)
	{
		if(arr[size] < arr[size-1])
		{
			if(minimum > arr[size])
			{
				if(size == 0)
				{
					if(arr[size] < minimum)
						minimum = arr[size];
				}
				else
				{
					minimum = arr[size];
				}
			}
		}
		
		size--;
		PrintMin(arr,size);
	}
	return minimum;
}

int main()
{
	int arr[BASE],size;
	int min_result;
	int max_result;
	
	cout<<"Enter the size of array : ";cin>>size;
	
	for(int i=0; i<size; i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	max_result = PrintMax(arr,size);
	min_result = PrintMin(arr,size);
	
	cout<<"The maximum element in array : "<<max_result<<endl;
	cout<<"The minimum element in array : "<<min_result<<endl;
	
	return 0;
}
