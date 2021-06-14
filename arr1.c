#include<stdio.h>

/* In this case we define the array size as 2 and stored the element in it 10
   for that purpose compiler wont gives you an warning or error,
   But there is possibility of annormous result. so please avoid this type of declaration. 
*/
int main()
{
	int arr[2];
	int index = 1;
	int i;
	for(i = 0; i<10; i++)
	{
		arr[i] = index;
		index++;
	}
	
	int j;
	for(j=0; j<10; j++)
	{
		printf("%d-",arr[j]);
	}
	
	printf("\n Size of array : %d\n",sizeof(arr)); //answer is 8 because 1 int = 4 bytes and we define
	                                               //array size as arr[2] so 2 * 4 = 8
								                   //size of array depends upon the defination of array you given it
								                   //not on how much elements are present it-- this observed by above code.
	return 0;
}
