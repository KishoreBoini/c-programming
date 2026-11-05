# majoritynarray

**C source:** `c-programs/controlstatements/arrays/majoritynarray.c`

```c
//Program for majoritynarray.c
#include<stdio.h>

int main()
{
	int precount=0,element;
	int arr[10]={5,9,3,1,2,6,7,4,1,8};
	int temp[10];
	for(int i=0;i<10;i++)
	{
		temp[i]=0;
	}
	for(int i=0;i<10;i++)
	{
		if(temp[i]==0)
		{
			int count =0;
			for(int j=0;j<10;j++)
			{
				if(arr[i]==arr[j])
				{
					temp[i]=1;
					count++;
				}
				
			}
			if(precount<count)
			{
				precount=count;
				element=arr[i];
			}
		}
		
				
	}
	printf("the majority element in the array is : %d repeated %d times \n",element,precount);


return 0;
}
```
