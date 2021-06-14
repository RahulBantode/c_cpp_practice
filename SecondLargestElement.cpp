/* Problem Statement :-

	Write a Program to find Second Largest Elements from array
	
*/

#include<iostream>
using namespace std;

int CheckSecondLargest(int arr[],int size)
{
	int max_1=0;
	int max_2=0;
	
	int i;
	
	for(i=0; i < size; i++)
	{
		if(arr[i] > max_1)
		{
			max_2 = max_1;
			max_1 = arr[i];
		}
		else if(arr[i] > max_2 && arr[i] < max_1) //here if arr[i]>max2 and arr[i]<max_1 then
		{
			max_2 = arr[i];
		}
	}
	
	return max_2;
}

int main()
{
	int arr[20];
	int size;
	cout<<"Enter the size : ";cin>>size;
	
	for(int i=0; i<size; i++)
	{
		cout<<"Enter : ";
		cin>>arr[i];
	}
	
	int result = CheckSecondLargest(arr,size);
	cout<<"Second Most largest element in array : "<<result;
	
	return 0;
}
