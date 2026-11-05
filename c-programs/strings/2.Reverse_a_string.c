#include<stdio.h>
#include<string.h>

void ReverseString(int len,char str[len])
{
	int i,j;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}

}

int main()
{
	char str[30];
	printf("Enter the String : ");
	fgets(str,sizeof(str),stdin);
	int n=strlen(str);
	ReverseString(n,str);
	puts(str);

return 0;
}
