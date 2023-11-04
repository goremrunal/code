#include<stdio.h>

int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",& num);
	if (num%2==0)
	{
	printf("enter no is even");
	}
	else if (num%2!=0)
	{
	printf("enter no is odd");
	}
	return 0;
	}
