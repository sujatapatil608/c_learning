// unary op(incre++/decre--)
#include<stdio.h>
void main()
{
/*	int i=10;
	i++;// increment op 11
	i--;// decrement op 10
	printf("i=%d",i); */
	
	int k,i=10;
//	k=++i; // pre-increment
	k=i++; // post-increment
	printf("k=%d\ti=%d",k,i);
	
	printf("\n");
	int a=3,b;
	b=a++ + ++a;
	printf("b=%d a=%d",b,a); 
	
	printf("\n");
	int n=3,y;
	y=n-- - --n;
	printf("y=%d n=%d",y,n);
}
