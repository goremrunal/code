/* calculate the total electricity bill*/

#include<stdio.h>
int main()
{
int N,p;
printf("enter electricity unit N:");
scanf("%d",&N);
if (N<=50)
{
p=N*0.050*20/100;
printf("%d",p);
}
else if(N <=150)
{
p=N*0.75*20/100;
printf("%d",p);
}
else if(N <=250)
{
p=N*1.20*20/100;
printf("%d",p);
}
else 
{
p=N*1.50*20/100;
printf("%d",p);
}
return 0;
}

