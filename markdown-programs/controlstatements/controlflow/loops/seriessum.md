# Seriessum

**C source:** `c-programs/controlstatements/controlflow/loops/seriessum.c`

## C Source Code

```c
//Program for seriessum.c
#include<stdio.h>

int main(void){
	int i,n,sum=0,term=1;
	printf("Enter the terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=term;
		term+=i;	
	
	}
	printf("The sum of series upto %d terms is %d\n",n,sum);

return 0;
}
```
