//star program

#include<iostream>
using namespace std;

int main()
{
	int no;
	cout<<"Enter the number for printing the * "<<endl;
	cin>>no;

	for(int i=1; i<=no; i++)
	{
		for(int j=5; j>=i; j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}

	return 0;
}
