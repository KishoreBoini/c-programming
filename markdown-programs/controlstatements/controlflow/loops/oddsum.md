# Oddsum

**C source:** `c-programs/controlstatements/controlflow/loops/oddsum.c`

## C Source Code

```c
//Program for oddsum.c
#include<stdio.h>

int main()
{
	int num1,num2,sum=0;
	printf("Enter the numbers : ");
	scanf("%d%d",&num1,&num2);
	for(int i=num1;i<=num2;i++)
	{
		if(i%2!=0)
		{
			sum+=i;
		}
	}
	printf("sum of odd numbers b/w %d - %d is : %d\n",num1,num2,sum);



return 0;
}
```
