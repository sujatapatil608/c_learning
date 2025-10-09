// ternary op (?,:)
#include<stdio.h>
void main()
{
/*	int n1=20,n2=30,max;
	max=n1>n2?n1:n2;
	printf("\n max of 2 number=%d",max);
	*/
	
/*	int n1,n2,max;
	printf("Enter two Nos:");
	scanf("%d %d",&n1,&n2);
	max=n1>n2?n1:n2;
	printf("Max of Two Numbers:%d",max);
	printf("\n");
	n1>n2?printf("n1 is max"):printf("n2 is max");
	*/
	//Q1.Accept age from user and print whether person is eligible for driving licence
	
/*	int age;
	printf("Enter Your Age:");
	scanf("%d",&age);
	age>=18?printf("Eligible for Driving  Licence"):printf("Not Eligible for Driving Licence");
	*/
//Q2.Accept number from user and print whether number is even or odd	
/*	int no;
	printf("Enter your nos:");
	scanf("%d",&no);
//	no>20?printf("Even no"):printf("Odd no");
	no%2==0?printf("Even no"):printf("Odd no");
	
	*/
	
	//Nested Ternary op
	
	int n1,n2,n3,max;
	printf("Enter 3 nos:");
	scanf("%d %d %d",&n1,&n2,&n3);
	max=(n1>n2)?(n1>n3?n1:n3):(n2<n3?n2:n3);
	printf("Max of 3 nos:%d",max);
}
