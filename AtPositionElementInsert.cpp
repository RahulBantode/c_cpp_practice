/* Insert the element to array at position */

#include<iostream>
#define BASE 50
using namespace std;


int InsertElement(int arr[],int size,int elm)
{
	int i;
	int pos;  //to take position from the user
	int num;  //variable for new number insertion
	int counter =0; //this for how many elements are inserted.
	if(size == elm)
	{	
		cout<<"Failure : Array is full unable to add new element\n";
		return -1;
	}
	
	cout<<"Enter the position for inserting the element : ";
	cin>>pos;
	
	for(i = elm; pos <= i; i--)
	{
		arr[i+1] = arr[i];
		if(i == pos)
		{
			cout<<"Enter the number :";cin>>num;
			arr[i] = num;		
			counter++;
		}
	}
	elm = elm + counter; //elm is size of elements in array before insertion + counter is element inserted in the array
	                    
	
	return elm;  //now return the total numbers of element inserted into the array for traversing.
	
}

int main()
{
	int arr[BASE];
	int size = sizeof(arr)/sizeof(int);
	int elements;
	
	cout<<"Enter how many elements you want to insert : ";
	cin>>elements;
	
	for(int i=0; i<elements; i++)
	{
		cout<<"Enter the element : ";
		cin>>arr[i];
	}
	
	int element_after_insert = InsertElement(arr,size,elements);
	
	for(int i=0; i<element_after_insert; i++)
	{
		cout<<arr[i]<<" ,";
	}
	
	cout<<endl;
	return 0;
}
