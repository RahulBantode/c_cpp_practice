//find out the maximum number from the array but there is one condition,
//array should be dynamically allocated.

#include<stdio.h>
#include<stdlib.h>

int Maximum(int * ,int *);

int main()
{
	int *buffer = NULL;
	int block_size = 0;
	int iloop,no,max;
	int max_value = 0;
	
	printf("Enter the block size : ");
	scanf("%d",&block_size);
	
	buffer = (int *)malloc(block_size * sizeof(int));
	
	//printf("Enter the elements for each array block : \n");
	for(iloop = 0; iloop < block_size; iloop++)
	{
		printf("Enter the element : ");
		scanf("%d",&no);
		buffer[iloop] = no;	
	}
	
	max_value = Maximum(&buffer[0],&block_size);
	//we can also make the function call as Maximum(buffer,&block_size) ;
	//because zeroth index of array == base address so we are able to pass the array name to function.
	printf("Maximum from the array : %d\n",max_value);
	
	return 0;
}

int Maximum(int *ptr,int *size)
{
	int icnt = 1;
	int max = *ptr;
	while(icnt <= *size)
	{
		if(max < *ptr)
			max = *ptr;
			
		ptr++;
		icnt++;
	}
	
	return max;
}
