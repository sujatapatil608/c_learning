// logical op
#include<stdio.h>
void main()
{
/*	int no1,no2;
	printf("Enter two nos:");
	scanf("%d %d",&no1,&no2);
	
	printf("Logical Operation Result:");
	printf("And result:%d\n",(no1>5&&no2<10));
	printf("OR result:%d\n",(no1>5||no2<10));

*/

int x,y,z;

printf("Enter three nos:");
scanf("%d %d %d",&x,&y,&z);

printf("Logical Operation Result:");
printf("AND result: %d\n",(x>z&&y>z));
printf("OR result: %d\n",(x>z||y>z));	

printf("NOT result: %d\n",!(x>y));	
}
