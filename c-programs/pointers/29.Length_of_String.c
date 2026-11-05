#include<stdio.h>

int StringLength(char *ptr)
{
	int count=0;
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
return count;
}

int main()
{
	char str[20];
	int ret;
	printf("Enter the string : ");
	scanf("%s",str);
	ret=StringLength(str);
	printf("Length of given string is %d\n",ret);
return 0;
}
