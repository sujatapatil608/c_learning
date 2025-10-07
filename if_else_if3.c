#include<stdio.h>
void main()
{
	int open,food,payment;
	printf("Go to resturant(1=yes,0-No)");
	scanf("%d",&open);
	
	if(open==1)
	{
		printf("Do have brakefast");
		scanf("%d",&food);
		
		if(food==1)
		{
			printf("Payment Type");
			scanf("%d",&payment);
			
			if(payment==1)
			{
				printf("Suceesfull ");
			}
			else{
				printf("do have  a change");
			}
		}
		else{
			printf("Make something Please");
		}
	}
	else{
		printf("GO to home");
	}
	
}
