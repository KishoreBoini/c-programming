#include<stdio.h>

void ASCII_of_Array_Elements(int len,int src[],int dest[])
{
	for(int i=0;i<len;i++)
	{
		dest[i]='0'+src[i];
	}
}


void ASCII_of_String_Elements(char str[],int arr[])
{
	int i=0;
	while(str[i]!='\0')
	{
		arr[i]=(int)str[i];
		i++;
	}
}

int main()
{
	int n;
	char choice;
	printf("chose string or array (s/a) : ");
	scanf(" %c",&choice);
	printf("Enter the length : ");
	scanf("%d",&n);
	char str[n];
	int arr1[n],arr2[n];
	if(choice=='s')
	{
		printf("Enter the string : ");
		scanf("%s",str);
		ASCII_of_String_Elements(str,arr2);
	}
	else if(choice=='a')
	{
		printf("Enter the Elements of the Array : ");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr1[i]);
		}
		ASCII_of_Array_Elements(n,arr1,arr2);
	}
	else
	{
		printf("invalid input!!\n");
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");

return 0;
}
