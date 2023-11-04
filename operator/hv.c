#include<stdio.h>

int main()
{
	float basic salary, gross,da,hra;
	printf("Enter the basic salary of employee");
	scanf("%f",& basic salary);
	
	if( basic salary <= 10000)
	{
	da = basic salary * 0.8;
	hra = basic salary* 0.2;
	}
	else if(basic salary <=20000)
	{
	da=basic salary* 0.9;
	hra=basic salary * 0.25;
	}
	else 
	{
	da=basic salary * 0.95;
	hra=basic salary * 0.3;
	}
	return 0;
	}
