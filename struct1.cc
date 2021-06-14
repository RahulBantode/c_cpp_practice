#include<stdio.h>
#include<string.h>

//simple demonstration of structure....

struct employee
{
	int id ;
	char name[30];
	
} e1,*e2;

int main()
{
	int eid;
	char ename[30];
	
	//this part accessing and manipulating the struct member by variable
	//when we use struct variable then we must have to use of . operator to acceess it
	printf("Enter the eid = ");
	scanf("%d",eid);
	printf("Enter the ename = ");
	scanf("%s",ename);
	
	e1.id = eid;
	strcpy(e1.name,ename);
	
	printf("Employee id (use of . operator)   = %d",e1.id);
	printf("Employee name (use of . operator) = %s",e1.name);
	
	//this part for structure to pointer
	//for that purpose we use -> arrow operator
	
	printf("Enter the eid = ");
	scanf("%d",eid);
	printf("Enter the ename = ");
	scanf("%s",ename);
	
	e2->id = eid;
	strcpy(e2->name,ename);
	
	printf("Employee id (use of -> operator)   = %d",e2->id);
	printf("Employee name (use of -> operator) = %s",e2->name);

	return 0;
}
