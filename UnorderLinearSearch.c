/*
	Linear Search :-
		There is two type searching techniques ,
		linear search:
			there are certain types between this-
			1.orderred linear search :- the data is in ordereed collection.
			2.unorder linear search :- the data are not in ordered collection.
		binary search
		
	Implementation of linear search -

*/

#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int *,int *,int);
/*
1 argument :- base address of array
2 argument :- total number of block size into that array
3 argument :- the number to be search
*/

int main()
{
	int *buffer;
	int block_size;
	int iloop, number;
	
	printf("Enter the block size : ");
	scanf("%d",&block_size);
	
	buffer = (int *)malloc(block_size * sizeof(int));
	
	for(iloop = 0; iloop < block_size; iloop++)
	{
		int no;
		printf("Enter the number : ");
		scanf("%d",&no);
		buffer[iloop] = no;	
	}	
	
	printf("Enter the Element to search : ");
	scanf("%d",&number);
	
	int result = LinearSearch(buffer,&block_size,number);
	
	if(result != -1)
		printf("Element %d are present in the array\n",number);
	else
		printf("Sorry :  Element are not present in the array\n");
		
	return 0;
}

int LinearSearch(int *buf,int *size,int no_search)
{
	int icnt;
	int ret_bool = -1;

	for(icnt=0; icnt < *size; icnt++)
	{
		if(buf[icnt] == no_search)
		{
			ret_bool = 0;
			break;
		}
	}
	
	return ret_bool;
}
