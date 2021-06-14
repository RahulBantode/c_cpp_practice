#include<stdio.h>
int main()
{
	int hour,noemp,ch,id;
	char name[20];
	do
	{
		printf("1.Employee...\n");
		printf("2.Overtime paid...\n");
		printf("3.Enter the Choice...\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:  fflush(stdin);
					 printf("Enter how many Employee=");
					scanf("%d",&noemp);
					for(int i=1; i<=noemp; i++)
					{
						fflush(stdin);
						printf("Name of Emp....=");
						scanf("%c\n",&name);
						fflush(stdin);
						
						printf("Id of Emp....=");
						scanf("%d\n",&id);
						fflush(stdin);
						
						printf("No. of Hours worked....=");
						scanf("%d\n",&hour);
						fflush(stdin);
					}
					break;
					
			case 2: int temphr;
					int payment=1;
					for(int i=1; i<=noemp; i++)
					{
						if(hour>=40)
						{
							temphr=hour-40;
							for(int j=1; j<=temphr; j++)
							{
								payment=payment*12;
							}
							printf("The employee worked for %d hrs and his overtime payment is %d\n",temphr,payment);
						}
					}
					break;					
		
		}
	}while(ch!=3);
	return 0;
}
