# Sumofprimenum

**C source:** `c-programs/controlstatements/controlflow/loops/sumofprimenum.c`

## C Source Code

```c
//Program for sumofprimenum.c
#include<stdio.h>

int main()
{
	int sum=0;
	for(int i=2;i<=1000;i++)
	{	
		int flag=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
									
			}

		}
		if(flag)
			sum+=i;
		

	}
	printf("The sum of prime numbers form 1-1000 is :%d\n",sum+2);
return 0;
}
```
