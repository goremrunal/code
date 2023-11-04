#include<stdio>.h
int main()

{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	if((ch>='a'|| ch<='z')&&(ch>='A'||ch>='Z'))
	{
	printf("'%c'character",ch);
	}
	else if(ch>='0'|| ch<='9')
	{
	printf("'%c'digit",ch);
	}
	else
	{
	printf("'%c' special chacter", ch);
	}
	return 0;
}

