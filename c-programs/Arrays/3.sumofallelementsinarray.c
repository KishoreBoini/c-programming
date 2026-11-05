#include<stdio.h>

int main()
{
	int arr[10];
	int len=sizeof(arr)/sizeof(arr[0]),i,sum=0;
	printf("Enter the elements in the array : ");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<i;j++)
	{
		sum+=arr[j];

	}
	printf("sum of all the elements in the array is : %d\n",sum);
}
