#include<stdio.h>

void SumofElements(int *ptr,int *sum,int len)
{
	for(int i=0;i<len;i++)
	{
		(*sum)+=ptr[i];				
	}
}

void main()
{
	int arr[5],sum=0;
	printf("Enter the array : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	SumofElements(arr,&sum,5);
	printf("Sum of the Array Elements : %d\n",sum);
}
