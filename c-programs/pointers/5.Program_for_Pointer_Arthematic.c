#include<stdio.h>

void main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *ptr=arr;
	printf("Pointer Arthematic\n");
	for(int i=0;i<10;i++)
	{
		printf("Index[%d] Address (%p) value %d\n",i,ptr+i,*(ptr+i));
	}
	printf("\n");
}
