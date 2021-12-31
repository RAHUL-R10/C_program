#include<stdio.h>

struct employees
{
	int Empno;
	char Empname[30],department[30];
	float salary;
};

main()
{
	int i,j;
	printf("Enter the numer of employees\n");
	scanf("%d",&j);
	struct employees x[j];
	
	for(i=0;i<j;i++)
	{
		printf("Enter the details of employee %d\n",i+1);
		printf("Employee number=");
		scanf("%d",&x[i].Empno);
		printf("Employee name=");
		scanf("%s",x[i].department);
		printf("Department=");
		scanf("%s",x[i].department);
		printf("salary=");
		scanf("%f",&x[i].salary);
	}
	printf("\n----------------Employee details------------------\n\n");

	for(i=0;i<j;i++)
	{
		printf("==========Details of Employee %d========\n",i+1);
		printf("Employee number = %d\n",x[i].Empno);
		printf("Employee name = %s\n",x[i].department);
		printf("Department = %s\n",x[i].department);
		printf("salary = %f\n",x[i].salary);
		printf("----------------------------------------\n\n");
	}
	return 0;
}
