//Method OverLoading Excercise

#include<iostream>
#include<string>
using namespace std;

class Invertdata
{
	public:
		int invert(int);
		char *invert(char *);
		void invert(int *,int);
};

int Invertdata::invert(int no)
{
	int remainder;
	int reverse=0;

	while(no>0)
	{
		remainder=no%10;
		reverse=reverse*10+remainder;
		no=no/10;
	}

	return reverse;
}

char* Invertdata::invert(char *str)
{
	int i,j;
	j=0;
	while(str[j]!='\0')
	{	
		j++;
	}
	j--;
	i=0;
	while(i<j)
	{
		int temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	return str;
}

void Invertdata::invert(int *a,int no)
{
	for(int i=0,j=no-1; i<j; i++,j--)
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
	
int main()
{
	Invertdata id;

	int ch,no,n;
	char s[20];
	do
	{
		cout<<"1.Reverse the Number"<<endl;
		cout<<"2.Reverse the String"<<endl;
		cout<<"3.Reverse the Array "<<endl;
		cout<<"4.Exit              "<<endl;
		cout<<"  Enter Your Choice."<<endl;
	
		cin>>ch;
		
		switch(ch)
		{
			case 1: //int no;
				cout<<"Enter the Number=";cin>>no;
				cout<<"Reverse="<<id.invert(no)<<endl;
				break;

			case 2: //char s[20];
				cout<<"Enter the String=";cin>>s;
				cout<<"Reverse="<<id.invert(s)<<endl;
				break;

			case 3: //int n;
				cout<<"Enter How many Element You want to add in the array=";cin>>n;
				int arr[n];
				for(int i=0; i<n; i++)
				{
					cin>>arr[i];
				}
			
				cout<<"The Reverse order of Array="<<endl;
				id.invert(arr,n);
				for(int i=0; i<n; i++)
				{
					cout<<arr[i];
				}
				break;

			case 4: break;

			default:cout<<"Invalid Choice..."<<endl;
				break;
		}
	}while(ch<=4);
	
	return 0;

}


