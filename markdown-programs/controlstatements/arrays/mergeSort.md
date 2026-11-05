# mergeSort

**C source:** `c-programs/controlstatements/arrays/mergeSort.c`

```c
#include<stdio.h>

void Merge(int arr[],int srt,int mid,int end)
{
	int temp[end-srt+1],i,j,k=0;
	i=srt;
	j=mid+1;
	while(i<=mid && j<=end)
	{
		if(arr[i]<=arr[j])						//1,5,8 2,4,9
		{
			temp[k++]=arr[i];
			i++;
		}
		else 
		{
			temp[k++]=arr[j];
			j++;
		}
	}
	while(i<=mid)
	{
		temp[k++]=arr[i];
		i++;
	}
	
	while(j<=end)
	{
		temp[k++]=arr[j];
		j++;
	}
	for(int i=0;i<k;i++)
	{
		arr[srt+i]=temp[i];
	}
}

void MergeSort(int arr[],int srt,int end)
{
	if(srt<end)
	{
		int mid;
		mid=srt+(end-srt)/2;
		MergeSort(arr,srt,mid);// left side 
		MergeSort(arr,mid+1,end);// right side
		Merge(arr,srt,mid ,end);
	}
}


int main()
{
	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	int len=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	MergeSort(arr,0,len-1);
	printf("sorted Array : ");
	for(int i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
return 0;
}
```
