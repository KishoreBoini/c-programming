# twioSum

**C source:** `c-programs/leetcode/twioSum.c`

```c
#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int* ans = malloc(2*sizeof(int));
	if(ans==NULL)
	{
		*returnSize=0;
		return NULL;
	}
	int k=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
		    ans[k++]=i;
		    ans[k]=j;
 		   *returnSize=k;
  		    return ans;
            }

        }             
    }


}

int main()
{
	int numsSize=4,target=9,returnSize=2,*ans;
	int nums[numsSize],sol[returnSize];
	printf("Enter the Arrar : ");
	for(int i=0;i<numsSize;i++)
	{
		scanf("%d",&nums[i]);
	}


 ans=twoSum(nums,numsSize,target,&returnSize);
 for(int i=0;i<=returnSize;i++)
 {
	 printf("%d ",ans[i]);
 }
 printf("\n");
 free(ans);
}
```
