#include<stdio.h>
struct employee
{
	char name[20];
	char phno[10];
	int age,salary;
};
void add(int n)
{
	struct employee e[20];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter name of employee %d:",i+1);
		scanf("%s",e[i].name);
		printf("Enter age of employee %d:",i+1);
		scanf("%d",&e[i].age);
		printf("Enter phone number of employee %d:",i+1);
		scanf("%s",e[i].phno);
		printf("Enter salary of employee %d:",i+1);
		scanf("%d",&e[i].salary);
	}
}
void display(int n)
{
	struct employee e[20];
	int i;
	printf("Name	Age	PhoneNumber	Salary\n");
	for(i=0;i<n;i++)
	{
		printf("%s	",e[i].name);
		printf("%2d	",e[i].age);
		printf("%s	",e[i].phno);
		printf("%d	\n",e[i].salary);
	}
}
int main()
{
	int n;
	printf("		EMPLOYEE DETAILS\n");
	printf("		^^^^^^^^^^^^^^^^\n");
	printf("Enter the number of employees(<=20): ");
	scanf("%d",&n);
	printf("\n	Detail entry:\n");
	add(n);
	printf("\n	Detail display:\n\n");
	display(n);
}
