#include<stdio.h>
int main()
char ch;
{
	print(" enter any char:");
	scanf("%C",&ch);
	if ((ch>='a')&&(ch<='z')&&(ch>='A')&&(ch<='Z'))
	{
		printf("ch is a alphabet");
	}
	else
	{
		printf("ch is not alphabet");
	}
	return 0;
}	
