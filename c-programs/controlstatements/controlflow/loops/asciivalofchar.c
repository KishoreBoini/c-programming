//Program for asciivalofchar.c
#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the charcter :");
	scanf("%c",&ch);
	for(int i='a',j='A';i<='z',j<='Z';i++,j++)
	{
		printf(" %c ASCII value is :%d\t",i,i);
		printf(" %c ASCII value is :%d\n",j,j);
	}
	printf("%d\n",ch);
return 0;
}
