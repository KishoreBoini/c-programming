# powerofnum

**C source:** `c-programs/controlstatements/controlflow/loops/powerofnum.c`

```c
//Program for powerofnum.c
#include<stdio.h>

int main()
{
	int baseNum,exp,power=1;
	printf("Enetr the base number : ");
	scanf("%d",&baseNum);
	printf("Enter the exponent :");
	scanf("%d",&exp);
	for(int i=1;i<=exp;i++)
	{
		power*=baseNum;
	}
	printf("The power of %d to %d is :%d\n",baseNum,exp,power);
return 0;
}
```
