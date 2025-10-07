//if else ladder
#include<stdio.h>
void main()
{
	int age;
	printf("Enter User Age:");
	scanf("%d",&age);
	
	if(age<=5)
	{
		printf("Ticket Free ");
	}
	else if(age>5 && age<10)
	{
		printf("Half Ticket");
	}
	else if(age>12 && age<60)
	{
		printf("Full Ticket");
	}
	else if(age>60 && age<75)
	{
		printf("Cenier Citizon");
	}
	else
	{
		printf("Free");
	}
}
