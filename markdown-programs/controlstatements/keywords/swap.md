# swap

**C source:** `c-programs/controlstatements/keywords/swap.c`

```c
//Program for swap.c
#include<stdio.h>
int main(){
int a,b,temp;
printf("Enter 2 num's : " );
scanf("%d,%d",&a,&b);
temp = a;
a = b;
b = temp;
printf("swapped=%d,%d\n",a,b);
return 0;
}
```
