#include<stdio.h>
void main()
{
	int no1,no2;
	char op;
	printf("Enter two Numbers:");
	scanf("%d %d",&no1,&no2);
	
	printf("Enter Operation(+ ,-, *, /):");
	scanf(" %c",&op);
	
	switch(op){
		case '+' : printf("Addition is:%d",(no1+no2));
				break;
		case '-': printf("Substraction is:%d",(no1-no2));
				break;
		case '/': printf("Divition is:%d",(no1/no2));
				break;
		case '*': printf("Multipcation is:%d",(no1*no2));
				break;
		default: printf("Invalid ");						
				
	}
}
