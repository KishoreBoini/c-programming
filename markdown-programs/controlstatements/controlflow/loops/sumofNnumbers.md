# sumofNnumbers

**C source:** `c-programs/controlstatements/controlflow/loops/sumofNnumbers.c`

```c
#include<stdio.h>

int main()
{
	int num,rem,sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("The sum of given number's digits is :%d\n",sum);

return 0;
}
```
