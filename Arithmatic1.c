#include<stdio.h>
void main()
{
	int appleprice,oilprice,milkprice;
	int appleQty,oilQty,milkQty;
	int total;
	int paid;
	appleprice=100;
	oilprice=155;
	milkprice=60;
	printf(" Enter Quanity of apple(kg):");
	scanf("%d",&appleQty);
	printf("Enter Quanity of oil(ltr):");
	scanf("%d",&oilQty);
	printf("Enter Quanity of milk(leter):");
	scanf("%d",&milkQty);
	
	total=(appleQty*appleprice)+(oilQty*oilprice)+(milkQty*milkprice);
	printf("Total bill amount :%d\n",total);
	
	printf("Enter amount paid by customer:");
	scanf("%d",&paid);
	printf("Change to return=%d\n",paid-total);
	
//	printf("Enter paid bill:");
//	scanf("%d",&paid);
//	printf("\n%d is paid return %d",paid,paid-total);
	
}
