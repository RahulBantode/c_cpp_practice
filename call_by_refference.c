//by using the call by refference intelligently we can return many values from function

#include<stdio.h>

void area_perimeter(int,float *,float *);

int main()
{
	int radius;
	float area,peri;
	
	printf("Enter the radius : ");
	scanf("%d",&radius);
	
	area_perimeter(radius,&area,&peri);
	printf("Area      : %d\n",area);
	printf("Perimeter : %d\n",peri);
		
	return 0;
}

void area_perimeter(int r,float *a,float *p)
{
	*a = 3.14 * r * r;
	*p = 2 * 3.14 * r;
}


