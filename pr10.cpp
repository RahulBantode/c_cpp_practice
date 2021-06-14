//Program Related to Function Overloading

#include<iostream>
using namespace std;

class maxdata
{
	public:
		int maximum(int,int);
		int maximum(int const *,int);

};

int maxdata::maximum(int v1,int v2)
{
	return v1>v2 ? v1:v2 ;
}

int maxdata::maximum(int const *a,int no)/*here first argument store base adreess of the stored elements,2nd is how much ele. is stored*/
{
	int max=a[0];
	for(int i=1; i<no; i++)
	{
	      if(a[i]>max)
		max=a[i];
	}
	return max;
}

int main()
{
	maxdata md;

	int no;
	cout<<"Enter how much Element you want to add :";cin>>no;
	int arr[no];
	for(int i=0; i<no; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Maximum= "<<md.maximum(400,330)<<endl;
	cout<<"Maximum= "<<md.maximum(arr,no);

	return 0;
}


		

