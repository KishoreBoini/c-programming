#include<stdio.h>
#include <string.h>

void ReverseString(char *ptr,int len)
{
	char temp;
	for(int i=0,j=len-1;i<j;i++,j--)
	{
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
	}
}

void main()
{
	char str[20];
	int len;
	printf("Enter String : ");
	scanf("%s",str);
	len=strlen(str);
	ReverseString(str,len);
	printf("Reversed string = %s\n",str);
}
