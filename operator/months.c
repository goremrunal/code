
//write a program  to input month number and print days in that month 

#include<stdio.h>
int main()
{
	int month;
	printf ("enter any number: N");
	scanf("%d", &month);
	if (month == 1)
	{
	printf("31 days");
	}
	else if(month == 2)
	{
	printf("28/29 days");
	}
	else if(month == 3)
	{
	printf("31 days");
	}
	else if(month == 4)
	{
	printf("30 days");
	}
	else if(month == 5)
	{
	printf ("31 days");
	}
	else if(month == 6)
	{
	printf ("30 days");
	}
	else if(month == 7)
	{
	printf ("31 days");
	}
	else if( month == 8)
	{
	printf ("30 days");
	}
	else if( month == 9)
	{ 
	printf ("31 days");
	}
	else if( month == 10 )
	{
	printf ("30 days");
	}
	else if( month == 11)
	{
	printf ("31 days");
	}
	 else if ( month == 12)
	{
	printf ( "31 days");
	}
	else
	{
	printf("invalid number");
	}
	
	return 0;
	}
