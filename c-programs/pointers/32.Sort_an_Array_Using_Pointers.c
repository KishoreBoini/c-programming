#include<stdio.h>

void InsertionSort(int *ptr,int len)
{
	int current,i,j;
	for(i=1;i<len;i++)
	{
		current=ptr[i];
		for(j=i-1;j>=0;j--)
		{
			if(current<ptr[j])
			{
				ptr[j+1]=ptr[j];
			}
			else
				break;
		}
		ptr[j+1]=current;
	}
}

int main()
{
	int arr[10];
	printf("Enter the Array Elements : ");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	InsertionSort(arr,10);
	printf("Sorted Array\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
