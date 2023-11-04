/* greater number */

#include <stdio.h>
int main()
{
   double n1,n2,n3;
   printf("enter three number")
   scanf("%lf,%lf,%lf,&n1,&n2,&n3");

   if(n1>=n2 & n1>=n3)
   {
   printf("%f is greater number");
   }
   if(n2>=n1 & n2>=n3)
   {
   printf("%f is greater number");
   }
   if(n3>=n2 & n3>=n1)
   {
   printf("%f is greater number");
   }

   return0;
}

