//print a pyramid

#include<iostream>
using namespace std;

int main()
{
	int size = 0;
	cout<<"Enter the Size of pyramid : ";
	cin>>size;
	
	for(int rows = 1; rows <= size; ++rows)
	{
		int col = 0;
		for(int space=1; space <= size-rows; ++space)
		{
			cout<<"  ";
		}
		while(col != rows * 2 - 1)
		{
			cout<<"* ";
			++col;
		}
		cout<<"\n";
	}

	
	for(int rows=size; rows >= 1; rows--)
	{
		for(int space = 0; space< size-rows; space++)
			cout<<"  ";
			
		for(int col=rows; col <= 2 * rows - 1; col++)
		{
			cout<<"* ";
		}
		for(int col=0; col <= rows-1; col++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
		return 0;
}
