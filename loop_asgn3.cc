#include<stdio.h>
int main()
{
	int x=4,y,z;
	y=--x;
	z=x--;
	printf("%d,%d,%d\n",x,y,y); //223
	
	int a=4,b=3,c;
	c=a-- -b;
	printf("%d,%d,%d\n",a,b,c);//331
	
	while('a'<'b') //printed because they consider their ascii value but while loop is go to the infinite use break or counter
	{
		printf("Hello,rahul");
		break;
	}
}		
