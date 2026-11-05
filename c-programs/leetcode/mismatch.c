#include<stdio.h>
#include<stdlib.h>

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int *arr=malloc(2*(sizeof(int)));
    int count[2001]={0};
    int duplicate=0,missing=0;
    for(int i=0;i<numsSize;i++)
    {
        count[nums[i]]++;
	printf("%d",count[i]);
    }
    for(int j=1;j<=numsSize;j++)
    {
	    printf("%d ",count[j]);
        if(count[j]==2)
        {
            duplicate=j;
        }
        if(count[j]==0)
        {
            missing=j;
        }
    }
    printf("\n");
    printf("%d %d\n",duplicate,missing);
    arr[0]=duplicate;
    arr[1]=missing;
    *returnSize=2;
    return arr;    
}

int main()
{
	int nums[4]={1,2,2,4},*arr;
	int numsSize=4;
	int returnSize;
	arr=findErrorNums(nums,numsSize,&returnSize);
	for(int i=0;i<returnSize;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");

}
