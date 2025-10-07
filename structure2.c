#include<stdio.h>
struct student{
	int id;
	char name[20];
	float marks;
	int age;
};

void main()
{ int n,i;
	printf("Enter no of student details: ");
	scanf("%d",&n);
	
	struct student std[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter student details %d:\n",i+1);
		printf("Enter student id:");
		scanf("%d",&std[i].id);
		
		printf("Enter student name:");
		scanf("%s",std[i].name);
		
		printf("Enter student age:");
		scanf("%d",&std[i].age);
		
		printf("Enter Student marks:");
		scanf("%f",&std[i].marks);
	}
	
	printf("Student Records:");
	for(i=0;i<n;i++){
		printf("id: %d | name: %s | age: %d | marks = %.2f\n",std[i].id,std[i].name,std[i].age,std[i].marks);
	}
	
	
}
