#include<stdio.h>


void sortDecending(int arr[],int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}


}

int main()
{
	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sortDecending(arr,n);
	printf("Sorted array (decending order) : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
return 0;
}
