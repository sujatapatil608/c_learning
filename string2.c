#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
//	char name[20]="sujata";
//	printf("%d",strlen(name));
	printf("Enter Your Name and length:");
//	scanf("%s",name);
gets(name);
	printf(" %d",strlen(name));
}
