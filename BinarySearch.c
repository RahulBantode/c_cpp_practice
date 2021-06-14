/*
	Binary Search :-
		Its Effective way of searching the elements from the array,
		Procedure to search the element using binary search-
		1. first of find out the medium of the array
		   to find out the medium we require to variable as low, high
		   low  = has first element index
		   high = last element index 
		2. And then check our user entered number with medium
		   1. if number less than medium
		   2. if number equal to medium
		   3. if number greater than medium
		3. And contiunes the finding medium of the array unless and util we caught an actual element
*/

#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int *,int *,int);

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
	
	printf("Enter the number to search : ");
	scanf("%d",&number);
	
	int result = BinarySearch(buffer,&block_size,number);
	
	if(result != 0)
		printf("Number %d present in the array\n",number);
	else
		printf("Sorry : number are not present in the array \n");
		
	return 0;
}

int BinarySearch(int *buf,int *size,int no_search)
{
	int low  = 0;
	int high = *size;
	int medium = 0;
	int retbool = 0;
	
	while(low <= high)
	{
		medium = (low + high) / 2;
		if(buf[medium] == no_search)
			retbool = 1;
		else if(buf[medium] < no_search)
			low = medium + 1;
		else
			high = medium - 1; 	
	}
	
	return retbool;
}
