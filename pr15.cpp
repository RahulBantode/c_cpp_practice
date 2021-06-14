#include<iostream>
using namespace std;

int main()
{
	int a[]={1,2,3,4};
	
	cout<<a[0];
	cout<<a[1];
	cout<<a[2];
	cout<<a[3];
	cout<<endl;
	for(int i=0; i<4; i++)
	{
		cout<<"a[ "<<i<<" ] = "<<a[i]<<endl;
	}
	return 0;
}
