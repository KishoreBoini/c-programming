# unionofarrays

**C source:** `c-programs/controlstatements/arrays/unionofarrays.c`

```c
//Program for unionofarrays.c
#include<stdio.h>

int main()
{
	int arrA[5]={1,2,3,4,5};
	int arrB[5]={4,5,6,7,8};
	int res[5],bres[5],inter[5];

	int n=sizeof(arrA)/sizeof(arrA[0]);
	int k=0,l=0,m=0;
	for(int i=0;i<n;i++)
	{
		int count=0,c=0;
		for(int j=0;j<n;j++)
		{
			if(arrA[i]==arrB[j])
			{
				count++;
			}
			if(arrB[i]==arrA[j])
			{
				c++;

			}
			if(arrA[i]==arrB[j])
			{
				inter[m++]=arrA[i];

			}

		}
		if(count==0)
			res[k++]=arrA[i];
		if(c==0)
			bres[l++]=arrB[i];

	}
	printf("A union B\n");
	for(int i=0;i<k;i++)
	{
		printf("%d ",res[i]);

	}
	printf("\n");
	printf("B union A\n");
	for(int i=0;i<l;i++)
	{
		printf("%d ",bres[i]);

	}
	printf("\n");
	printf("A intersection B\n");
	for(int i=0;i<m;i++)
	{
		printf("%d ",inter[i]);

	}
	printf("\n");

return 0;
}
```
