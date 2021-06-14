/* Problem Statement :-
	Write a program to count the total number of odd and even numbers
	in the array 
*/

#include<iostream>
#define BASE 50

using namespace std;

void CountTotalEvenOdd(int arr[],int size)
{
	int odd=0,even=0;
	int i;
	
	for(i=1; i <= size; i++)
	{
		if(arr[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	
	cout<<"Total Even numbers in array : "<<even<<endl;
	cout<<"Total Odd numbers in array  : "<<odd<<endl;

}

int main()
{
	int arr[BASE];
	int size;
	
	cout<<"Enter the size : ";
	cin>>size;
	
	for(int i=0; i<size; i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	CountTotalEvenOdd(arr,size);
}
