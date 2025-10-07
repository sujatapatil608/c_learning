//switch case
#include<stdio.h>
void main()
{
	int day;
	printf("Enter Day number (1 to 7):");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1: printf("Monday");
				break;
		case 2: printf("Tuesdat");
				break;
		case 3: printf("Wednesday");
				break;
		case 4: printf("Thursday");
				break;
		case 5: printf("Friday");
				break;
		case 6: printf("Saturday");
				break;
		case 7: printf("Sunday");
				break;
		default: printf("Invalid day");									
				
	}
}
