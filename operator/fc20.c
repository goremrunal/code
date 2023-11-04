*/days in month */

#include<stdio.h>
int main()
{
int num;
printf("Enter the num of month");
scanf("%d",&num);

if(num == 1||num == 3|| num == 5 || num==7 || num == 8 || num == 10 || num == 12)
{
printf("31 days in this month");
}
else if (num == 2)
{
printf( " 28 or 29 days in this month");
}
else if ( num == 4|| num == 6 || num == 11)
{
printf("30 days in this month");
}
else 
{
printf("No month exists");
}
return 0;
}
