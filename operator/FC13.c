#include<stdio.h>
int main()
{
	int A;
	int B;
	int P;
	printf("Enter the no. of classes attented :");
	scanf("%d",&A);
	printf("Enter the no. of classes held:");
	scanf("%d",&B);
	 int p = ((A/B)*100);
	 if (p > 75)
	 {
	 printf("Able to seat in exam");
	 }
	 else 
	 {
	 printf("NOt able to seat in exam");
	 }
	 return 0;
	 }
