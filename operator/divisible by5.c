#include<stdio.h>
int main ()
{
	int num;
	printf("enter any num");
	scanf("%d", &num);
	{
	if((num % 5==0) && (num % 11==0))
	{
		printf("number is divisible by 5 and 11");
	}
	else
	{
		printf("number is not divisible by both");
	}
	
	}
	return 0;
}
	
