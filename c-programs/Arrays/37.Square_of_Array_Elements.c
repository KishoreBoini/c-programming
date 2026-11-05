#include<stdio.h>

void Square_of_Elements(int len,int arr[])
{
	for(int i=0;i<len;i++)
	{
		arr[i]=arr[i]*arr[i];
	}
}

int main()
{
	int n;
	printf("Enter the size of the Array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Elements in the Array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	Square_of_Elements(n,arr);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

return 0;
}
