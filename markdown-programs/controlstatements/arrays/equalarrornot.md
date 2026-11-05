# Equalarrornot

**C source:** `c-programs/controlstatements/arrays/equalarrornot.c`

## C Source Code

```c
//Program for equalarrornot.c
#include<stdio.h>

int main()
{
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			printf("arrys are not equal \n");
			return 0;
		}
	}
	printf("arrays are equal\n");

return 0;
}
```
