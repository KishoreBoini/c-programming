# transactionmem

**C source:** `c-programs/controlstatements/controlflow/if/transactionmem.c`

```c
//Program for transactionmem.c
#include<stdio.h>
int main(){
	int a,b;
	int x=900,y=901,z=902;
	printf("Enter you id :");
	scanf("%d",&a);
	printf("Enter your amount :");
	scanf("%d",&b);
	if ((a==x)||(a==y)||(a==z))
		printf("welcome\n");
	else if(b>=100)
		printf("welcome\n");
	else
		printf("not a member\n");
return 0;

}
```
