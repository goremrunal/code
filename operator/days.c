/* library days */


#include<stdio.h>
int main()
{
int D;
printf("enter the Days:");
scanf("%d",&D);
if(D<=5)
{
printf("%d",D*2);
printf("%d",D*3);
}
else if (D<=15)
{
printf("%d",D*4);
}
else
{
printf("%d",D*5);
}
return 0;
}

