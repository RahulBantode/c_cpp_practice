#include<stdio.h>

int main()
{
	int no1;
	long no2;
	char no3;
	float no4;
	double no5;
	
	scanf("%d %ld %c %f %lf",&no1,&no2,&no3,&no4,&no5);
	/*scanf("%d",&no1);
	scanf("%ld",&no2);
	scanf("%c",&no3);
	scanf("%f",&no4);
	scanf("%lf",&no5);
	*/
	
	printf("%d\n",no1);
	printf("%ld\n",no2);
	printf("%c\n",no3);
	printf("%.3f\n",no4);
	printf("%.9lf\n",no5);
	
	return 0;
}
