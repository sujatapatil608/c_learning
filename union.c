#include<stdio.h>
union employee
{
	int id;
	char name[20];
	char desgination;
	float salary;
};
void main()
{
	union employee emp;
	 printf("Enter Emp id:");
	 scanf("%d",&emp.id);
	 
	 printf("Enter Emp name:");
	 scanf("%s",emp.name);
	 
	 printf("Enter Desgination:");
	 scanf("%s",emp.desgination);
	 
	 printf("Enter Salary:");
	 scanf("%f",&emp.salary);
	 
	 printf("Details of Employee");
	 printf("Employee id=%d",emp.id);
	 printf("Employee name=%s",emp.name);
	 printf("Employee desgition=%s",emp.desgination);
	 printf("Employee salary=%f",emp.salary);

}
