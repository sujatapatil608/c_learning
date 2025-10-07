#include<stdio.h>
void main()
{
	int temp;
	
	printf("Enter Temprature:");
	scanf("%d",&temp);
	
	if(temp<=10)
	{
		printf("very Cold");
	}
	else if(temp>=10 && temp<=15)
	{
		printf("Cold");
	}
	else if(temp>=15 && temp<=30)
	{
		printf("Modrate");
	}
	else if(temp>=30 && temp<=40)
	{
		printf("Hot");
	}
	else
	{
		printf("very Hot");
	}
}
