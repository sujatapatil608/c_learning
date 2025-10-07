#include<stdio.h>
#include<string.h>
void main()
{
/*	char name[20];
//	char name[20]="sujata";
//	printf("%d",strlen(name));
	printf("Enter Your Name and length:");
//	scanf("%s",name);
gets(name);
	printf(" %d",strlen(name));
	*/
	
/*	char name1[20]="Hello";
	char name2[20];
	strcpy(name2,name1);
	printf("name 1=%s\n",name1);
	printf("name 2=%s\n",name2);
	*/
	
/*	char name1[20];
	char name2[20];
	printf("Enter your name: ");
	gets(name1);
	strcpy(name2,name1);
	printf("name1=%s\n",name1);
	printf("name2=%d\n",name2);
	*/
	
/*	char s1[10];
	char s2[10];
	printf("Enter your name:");
	scanf("%s %s",&s1,&s2);
	if(strcmp(s1,s2)==0)
	printf("String are Equal");
	else
	printf("String are not Equal");
	*/
	// user can password valid and invalid
/*	char password[20],input[20];
	strcpy(password,"admin123");
	
	printf("Enter password\n");
	scanf("%s",&input);
	
	if(strcmp(password,input)==0)
	printf("Access Granted");
	else
	printf("Access Do Not");
	*/
	
	char name1[20]="Sujata ";
	char name2[20]="Patil";
	char str[20]="I am Currently pune";
	strcat(name1,name2);
	strcat(name1,str);
	printf("Concatenated String=%s\n",name1);
}
