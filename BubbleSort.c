/*Problem Statement :-
	Implementation of Bubble sort algorithm

The Important implementation of this program is we are created the array dynamically instead of statically
Yes we know that at the time of array declaration we have to convey the compiler how much block you want to given to array
In this case we getting the number of blcok from the user and then we allocate the memory dynamically using malloc
which are allocated on the heap instead of stack.
And after when we are going to call the function (BubbleSort) we are passing the only base address to the function
instead of whole the address which can make our function light heavy.

*/
#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int *,int *);
void swap(int *,int *);

int main()
{
	//dynamic allocation of array memory
	int *buffer = NULL;
	int block_size = 0;
	int iloop,no;
	
	printf("Enter the size of blocks : ");
	scanf("%d",&block_size);
	
	buffer = (int *)malloc(block_size * sizeof(int));
	
	for(iloop = 0; iloop < block_size; iloop++)
	{
		printf("Enter the number : ");
		scanf("%d",&no);
		buffer[iloop] = no;
	}
	
	printf("Before sorting : \n");
	for(iloop = 0; iloop < block_size; iloop++)
	{
		printf("%d\n",buffer[iloop]);
	}
	
	BubbleSort(buffer,&block_size);
	
	printf("After sorting : \n");
	for(iloop = 0; iloop < block_size; iloop++)
	{
		printf("%d\n",buffer[iloop]);
	}
	return 0;
}

void BubbleSort(int *ptr,int *size)
{
	int icnt ;
	int jcnt ;
	int array_size = *size;
	
	for(icnt = 0; icnt < array_size; icnt++)
	{
		for(jcnt = icnt + 1; jcnt < array_size; jcnt++)
		{
			if(ptr[icnt] > ptr[jcnt])
				swap(&ptr[icnt],&ptr[jcnt]);
		}
	}
}

void swap(int *t1,int *t2)
{
	int temp = *t1;
	*t1 = *t2;
	*t2 = temp;
}

