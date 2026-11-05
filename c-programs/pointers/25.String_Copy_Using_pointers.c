#include<stdio.h>

void StringCopy(char *src,char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest=*src;
}

void main()
{

	char str[20],Copy[20];
	printf("Enter the string : ");
	scanf("%s",str);
	StringCopy(str,Copy);
	printf("Copied String = %s\n",Copy);
}
