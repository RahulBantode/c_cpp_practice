#include<iostream>
using namespace std;

int main()
{
	int matrix[100][100];
	int M,N;
	int Q;
	cout<<"How many Queries : ";
	cin>>Q;
	
	int test_case = 0;
	
	while(test_case < Q)
	{
		cout<<"Enter the rows and columns: \n";
		cin>>N>>M;
		
		for(int i=0; i<N; i++)
		{	
			for(int j=0; j<M; j++)
			{
				cin>>matrix[i][j];
			}
		}
	
		
		int sum = 0;
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<M; j++)
			{
				sum = sum + matrix[i][j];
			}
		}
	
		cout<<sum;
	
		test_case++;
	}
	
	return 0;
}

