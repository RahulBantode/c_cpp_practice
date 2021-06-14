#include<iostream>
using namespace std;

int main()
{
	int no = 3;
	int *ptr = &no;
	
	cout<<"Value Increment by 1 : "<<++*ptr<<endl;
	cout<<"Value Increment by 2 : "<<*ptr + 2<<endl;
	cout<<"value Decrement by 1 : "<<--*ptr<<endl;
	
	int var = 0;
	int *ptr1 = &var;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	
	cout<<*ptr1<<endl;
	cout<<**ptr2<<endl;
	cout<<***ptr3<<endl;
	
	return 0;
}
