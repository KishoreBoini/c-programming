#include<stdio.h>

void main()
{
	int a=5,arr[5]={1,2,3,4,5};
	int *iptr=&a;
	int *ptra=arr;
	printf("Array Pointer %d\n",(*ptra+3));
	printf("Integer pointer %d\n",(*iptr+3));

}
