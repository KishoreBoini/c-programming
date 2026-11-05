#include<stdio.h>

void main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *ptr=arr;
	printf("Array Notation\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Pointer Notation\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",(*ptr+i));
	}
	printf("\n");
}
