//Program for nospecialchar.c
#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="srinivas2003@gmail.com";
	int len=strlen(str);
	for (int i=0;i<len;i++)
	{
		if (str[i]>= '!'&&'@'<=str[i])
		{
			str[i]=str[i+1];

		}
		i--;


	}
	printf("%s",str);
return 0;
}
