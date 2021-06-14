// Two different ways to access the elements of the array
// 1. By using array subscript operator.
// 2. By using the pointer variable.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//here we allocate the memory for array dynamically (to get good handson it)
	int *buffer = NULL;
	int block_size = 0;
	int iloop;
	int no;	
	
	printf("Enter number of blocks : ");
	scanf("%d",&block_size);
	
	buffer = (int *)malloc(block_size * sizeof(int));
	
	for(iloop = 0; iloop < block_size; iloop++)
	{
		printf("Enter the character : ");
		scanf("%d",&no);
		buffer[iloop] = no;	
	}

	printf("This way is accessing element using array subscript variable : \n");
	for(iloop = 0; iloop < block_size; iloop++)
	{
		printf("Adresss = %u , value = %d\n",&buffer[iloop],buffer[iloop]);
	}	
	
	printf("Another way to access the elements using pointer variable : \n");
	int *ptr = &buffer[0];
	
	for(iloop = 0; iloop < block_size; iloop++)
	{
		printf("Address = %u , Value = %d\n",ptr,*ptr);
		ptr++;
	}
	return 0;
	
}

