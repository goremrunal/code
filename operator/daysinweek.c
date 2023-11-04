#include<stdio.h>

int main()
{
	int day;
	printf("enter any number: (1-7)");
	scanf("%d",&day);
	if(day==1)
	{
	printf("monday");
	}
	else if(day==2)
	{
	printf("tuesday");
	}
	else if(day==3)
	{
	printf("wednsday");
	}
	else if(day==4)
	{
	printf("thursday");
	}
	else if(day==5)
	{
	printf("friday");
	}
	else if(day==6)
	{
	printf("saturday");
	}
	else if(day==7)
	{
	printf("sunday");
	}
	else
	{
	printf("input is invalid");
	}
	return 0;
	}
