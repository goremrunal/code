#include<stdio.h>
int main()
{
	int phy,chem,bio,maths,comp;
	float per;
	
	printf("Enter five subjects marks :");
	scanf("%d%d%d%d%d",&phy,&chem,&bio,&maths,&comp);

	per=(phy+chem+bio+maths+comp)/0.5;
	printf("per=%.2f\n",per);
	if(per>=90)
	{
	printf("grade A");
	}
	else if(per>=80)
	{
	printf("grade B");
	}
	else if(per>=70)
	{
	printf("grade C");
	}
	else if(per>=60)
	{
	printf("grade D");
	}
	else if(per>=50)
	{
	printf("grade E");
	}
	else if(per>=40)
	{
	printf("grade F");
	}
	
	}
