#include<stdio.h>

void ArrSum(int *ptr,int *sum,int len)
{
	for(int i=0;i<len;i++)
	{
		*sum+=*(ptr+i);
	}
}

int main()
{
	int arr[5],sum=0;
	printf("Enter Array Elemets : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	ArrSum(arr,&sum,5);
	printf("Sum of Array = %d\n",sum);
}
