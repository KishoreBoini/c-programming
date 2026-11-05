# Pos

**C source:** `c-programs/controlstatements/controlflow/if/pos.c`

## C Source Code

```c
//Program for pos.c
#include<stdio.h>
int main(){
int x;
printf("Enter the value :");
scanf("%d",&x);
if (x>0)
	printf("positive number :%d\n",x);
if (x<0)
	printf("not a valid number");
return 0;
}
```
