#include<stdio.h>

void printarr(int *ptr)
{
	for(int i=0;i<5;i++)
	{
		printf("%d ",(*ptr+i));
	}
	printf("\n");
}

void main()
{
	int arr[5]={1,2,3,4,5};
	printarr(arr);
}
