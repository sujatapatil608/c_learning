// Expressions and Operators
// Arthmetic

#include<stdio.h>
void main(){
/*int n1,n2,n3;
printf("Enter n1:");
scanf("%d",&n1);
printf("Enter n2:");
scanf("%d",&n2);
n3=n1+n2;
printf("Addition=%d",n3);
printf("\nSubstraction=%d",n1-n2);
printf("\nMultiplication=%d",n1*n2);
printf("\nDivision=%d",n1/n2);
printf("\nRemainder:%d",n1%n2);
*/

// Assignment
/*int n1=2,n2=5,n3;
n3=n1*n2/2;
printf("%d",n3); */

// short hand or compound assignment(+=,-=,*=,/=,%=)
/*int a=10,b=5;
//a+=b;//a=a+b //==a=10+5 =5
a-=b;
printf("a=%d",a); */

// Relational op

/*int a=20,b=5 ,c;
printf("%d\n",a<b);
printf("%d\n",a<=b);
printf("%d\n",a>b);
printf("%d\n",a>=b);
printf("%d\n",a==b);
printf("%d\n",a!=b);
printf("\t");
c=a<b+20;
printf("c=%d",c); */

//4.LogicalOperator && || !
//int a=20,b=20,c;//5
//c=a<b && b<50;// false 0
//c=a<b|| b<50;// ture 1
//c=!(a<b && b<50);// ture 1
//c=a>b && b-10;//ture 1
//printf("c=%d",c);

//printf("%d",!a);// false 0
int a=10,b=20,c;
c=a>b && a++;
printf("c=%d\t a=%d",c,a);



}
