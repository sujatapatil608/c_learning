#include<stdio.h>
struct student{
	int id;
	char name[20];
	int age;
};
union students {
	int id;
	char name[20];
	int age;
};
void main()
{
	struct student s1;
	
	printf("Size of Struct =%d\n",sizeof(s1));
	
	union students s2;
	printf("Size of Union =%d\n",sizeof(s2));
	
	
	int a;
	char c;
	printf("Size of int =%d\n Size of char =%d",sizeof(a),sizeof(c));
}
