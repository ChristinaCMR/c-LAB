#include<string.h>
#include<stdio.h>
int main()
{
	char name[20];
	int unit,charge,Total;
	printf("Enter the name");
	scanf("%s",name);
	printf("\nEnter the no. of units consumed");
	scanf("%d",&unit);
	if(unit<=200)
	{
		charge=unit*0.8+100;
	}	
	else if(unit<=300)
	{
		charge=(0.8*200+0.9*(unit-200)+100;
	}
	else if
	{
		charge=(0.8*200+0.9*100+1*(unit-300)+100;
	}
	else
	{
		printf("invalid unit");
		return 1;
	}
		Total=charge+100;
	{
		
		printf("the total charge is %d\n",Total);
		printf("\nthe name of the customer is %s",name);
		return 0;
	}
