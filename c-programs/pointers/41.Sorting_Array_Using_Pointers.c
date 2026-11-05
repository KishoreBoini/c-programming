#include<stdio.h>

void SelectionSort(int *ptr,int len)
{
	int min;
	for (int i=0;i<len-1;i++)
	{
		min=i;
		for(int j=i+1;j<len;j++)
		{
			if(ptr[j]<ptr[min])
			{
				min=j;
			}
		}
		int temp=ptr[i];
		ptr[i]=ptr[min];
		ptr[min]=temp;
	}
}

int main()
{
	int arr[5];
	printf("Enter the Array ELements : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	SelectionSort(arr,5);
	printf("Sorted Array \n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
return 0;
}
