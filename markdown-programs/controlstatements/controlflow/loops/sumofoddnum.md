# Sumofoddnum

**C source:** `c-programs/controlstatements/controlflow/loops/sumofoddnum.c`

## C Source Code

```c
//Program for sumofoddnum.c
#include<stdio.h>

int main()
{
	int num,sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{	if(i%2!=0)
		{
			sum+=i;
		}
	}
printf("sum of %d odd numbers :%d\n",num,sum);
}
```
