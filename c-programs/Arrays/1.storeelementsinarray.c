#include<stdio.h>

int main()
{
	//int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int len;
	printf("Enter the length of the array : ");
	scanf("%d",&len);
	int arr[len];
	printf("Enter the Nums : ");
	for(int i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

return 0;
}
