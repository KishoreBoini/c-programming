#include<stdio.h>

int Delete_Element(int len,int arr[],int element)
{
	int j=0;
	for(int i=0;i<len;i++)
	{
		if(arr[i]!=element)
		{
			arr[j++]=arr[i];
		}
	}
return j;
}

int main()
{
	int n,e,re;
	printf("Enter the size of the Array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Elements in the Array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the Element you want to delete : ");
	scanf("%d",&e);
	re=Delete_Element(n,arr,e);
	for(int i=0;i<re;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

return 0;
}
