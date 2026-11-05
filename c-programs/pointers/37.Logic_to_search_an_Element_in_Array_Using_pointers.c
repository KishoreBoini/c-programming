#include<stdio.h>

int LinearSearch(int *ptr,int len,int key)
{
	for(int i=0;i<len;i++)
	{
		if(*ptr == key)
		{
			return i;
		}
		ptr++;
	}
return -1;
}

int main()
{
	int arr[5],key,ret;
	printf("Enter Array Elements : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Search Element : ");
	scanf("%d",&key);
	ret=LinearSearch(arr,5,key);
	if(ret == -1)
		printf("Element Not Found\n");
	else
		printf("The Index of the Given Number is %d\n",ret);
	
return 0;
}
