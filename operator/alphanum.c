#include<stdio.h>
int main()
{

	char ch;
	printf(" enter any char:");
	scanf("%c",&ch);
	if ((ch>='a')&&(ch<='z')&&(ch>='A')&&(ch<='Z'))
	{
		printf("ch is a alphabet");
	}
	else 
	{
		printf("ch is number");	
	}

	return 0;
}	
