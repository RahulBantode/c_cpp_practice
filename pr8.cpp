//Class Practice Program for the Convert Temprature Farenhit to the Celcius

#include<iostream>
using namespace std;

class temp
{
		float f,c;
	public:
		void put()
		{
			cout<<"Enter the Temprature in Farenhit=";
			cin>>f;
		}

		void calculate()
		{
			c=5*(f-32)/9;
		}

		void display()
		{
			cout<<"Temprature in Celcius="<<c<<"c"<<endl;		
		}

};

int main()
{
	temp t;
	t.put();
	t.calculate();
	t.display();

	return 0;
}
