# Sumofnnatunotdiv3O5

**C source:** `c-programs/controlstatements/controlflow/loops/sumofnnatunotdiv3o5.c`

## C Source Code

```c
//Program for sumofnnatunotdiv3o5.c
#include<stdio.h>

int main()
{
	int num;
	long long int sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1;i<num;i++)
	{
		if(i%3!=0 && i%5!=0)
		{
			sum+=i;
		}
	}
	printf("some of %d natural numbers which are not divisible by 3 or 5 is :%lld\n",num,sum);

return 0;
}
```
