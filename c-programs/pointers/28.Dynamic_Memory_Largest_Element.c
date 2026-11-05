#include<stdio.h>
#include <stdlib.h>

int LargestElement()
{
	int size,*arr;
	printf("Enter the size of Array :");
	scanf("%d",&size);
	arr=malloc(sizeof(int)*size);
	if(arr==NULL)
	{
		return -1;
	}
	printf("Enter the Elements of Array :");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max;
	max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	free(arr);
	arr=NULL;
return max;
}

int main()
{
	int ret;
	ret=LargestElement();
	if(!ret)
		printf("Memory not Allocated\n");
		
	printf("The max value in the array is %d\n",ret);
return 0;
}
