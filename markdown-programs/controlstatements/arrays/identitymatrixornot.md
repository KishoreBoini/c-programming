# identitymatrixornot

**C source:** `c-programs/controlstatements/arrays/identitymatrixornot.c`

```c
//Program for identitymatrixornot.c
#include<stdio.h>

int main()
{
	int arr[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	int flag=0;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
				if (i==j)
				{
					if(arr[i][j]!=1)
					{
						flag=1;
						break;
					}
					
				}
				else
				{
					if (arr[i][j]!=0)
					{
						flag=1;
						break;
					}
				}
		

		}
		
	}
	if (flag)
		printf("not a identity matrix\n");
	else
		printf("identity matrix\n");


return 0;
}
```
