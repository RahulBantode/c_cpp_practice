//dynamic allocation memory to the array using malloc function

#include<stdlib.h>
#include<stdio.h>

int main()
{
	int *buffer = NULL; //interger pointer
	int block_size = 0; //how many block/byte size of array you want it gives from the user.
	int iloop;
	printf("How many blocks you want to create : ");
	scanf("%d",&block_size);
	
	buffer = (int *)malloc(block_size * sizeof(int));
	
	if(buffer == NULL)
	{
		printf("Failure : unable to allocate the memory\n");
		return -1;
	}
	
	printf("size of pointer variable : %d\n",sizeof(buffer + iloop));
	
	for(iloop = 0; iloop < block_size; iloop++)
	{
			buffer[iloop] = iloop;
	}
	
	printf("The data of array is....\n");
	for(iloop = 0; iloop < block_size; iloop++)
	{
		printf("%d\n",buffer[iloop]);
	}
}
