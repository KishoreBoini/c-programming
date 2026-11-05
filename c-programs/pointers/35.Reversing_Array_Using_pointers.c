#include<stdio.h>

void ReverseArr(int *ptr,int len)
{
	for(int i=0,j=len-1;j>i;i++,j--)
	{
		int temp=*(ptr+i);
		*(ptr+i)=*(ptr+j);
		*(ptr+j)=temp;
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
	ReverseArr(arr,10);
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
return 0;
}
