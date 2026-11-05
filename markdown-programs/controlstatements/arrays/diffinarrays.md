# diffinarrays

**C source:** `c-programs/controlstatements/arrays/diffinarrays.c`

```c
//Program for diffinarrays.c
#include<stdio.h>

int main()
{
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={5,6,1,2,4,9,10,4,7,8};
	int diff[10];
	printf("The difference b/w the 2 arrays is : ");
	for(int i=0;i<10;i++)
	{
		diff[i]=arr1[i]-arr2[i];
		printf("%d ",diff[i]);
	}
	printf("\n");

return 0;
}
```
