#include<stdio.h>
void main()
{
	/*
	char name[20]="Sujata Patil";
	
	printf("My name is =%s",name);
	*/
	
	char name[20];
	printf("Enter Your Full name:");
//	scanf("%s",&name);

gets(name);
	
	printf("My name is=%s",name);
}
