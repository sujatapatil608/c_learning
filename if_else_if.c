#include<stdio.h>
void main()
{
	int ticket,idproof,luggage;
	
	printf("Dou you have a ticket?(1= yes,0-No)");
	scanf("%d",&ticket);
	
	if(ticket==1)
	{
		printf("Do you have a Id proof?(1=yes,0-No)");
		scanf("%d",&idproof);
		
		if(idproof==1)
		{
			printf("Is Laggauge within 20 kg?(1=yes,0-No)");
			scanf("%d",&luggage);
			if(luggage==1)
			{
				printf("Check in Succesfully");
			}
		  else
		    {
				printf("Extra Luggage charges apply");
			}
		}
	     	
		else{
				printf("Id Proof Required");
			}
		}
			else{
				printf("No ticket");
			}
	}

