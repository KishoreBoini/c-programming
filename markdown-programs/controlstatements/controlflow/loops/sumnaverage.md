# Sumnaverage

**C source:** `c-programs/controlstatements/controlflow/loops/sumnaverage.c`

## C Source Code

```c
//Program for sumnaverage.c
#include<stdio.h>

int main()
{
	int num,sum=0,i=1;
	float avg;
	printf("Enter the number of numbers : ");
	scanf("%d",&num);

	while(i<=num)
	{
		if (num<0){
			printf("Enter the positive number \n");
			continue;
		}
	sum+=i;
	
	i++;	

	}
	avg=sum/num;
	printf("sum of n digits =%d Average of n digits =%.2f\n",sum,avg);
return 0;
}
```
