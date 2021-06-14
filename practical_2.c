#include<iostream>
using namespace std;

int main()
{
	int no = 3;
	int *ptr = &no;
	
	cout<<"Value Increment by 1 : "<<++*ptr<<endl;
	
	return 0;
}
