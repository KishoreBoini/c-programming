# 42,Dynamically_Allocated_Memory_For_array

**C source:** `c-programs/pointers/42,Dynamically_Allocated_Memory_For_array.c`

```c
#include<stdio.h>
#include<stdlib.h>

int* DynamicArray(int n)
{
	int *ptr;
	ptr=malloc(n*sizeof(int));
	if(ptr==NULL)
		return NULL;
return ptr;
}

int main()
{
	int size,data,*ret,k=0;
	printf("Enter the size of Array: ");
	scanf("%d",&size);
	ret=DynamicArray(size);
	if(ret==NULL)
	{
		printf("Memory Not Allocated\n");
		return -1;
	}
	while(k<size)
	{
		printf("Enter the data : ");
		scanf("%d",&data);
		ret[k]=data;
		k++;
	}
	for(int i=0;i<size;i++)
	{
		printf("%d ",ret[i]);
	}
	printf("\n");
	free(ret);
	ret=NULL;
return 0;
}
```
