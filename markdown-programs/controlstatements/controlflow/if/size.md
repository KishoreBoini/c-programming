# size

**C source:** `c-programs/controlstatements/controlflow/if/size.c`

```c
//Program for size.c
#include<stdio.h>
 
int main(){
int a=2;
int *ptr;
ptr=&a;
printf("%d\n",*ptr);
printf("%d\n",a);
printf("%p\n",&a);
printf("%p\n",ptr);

return 0;
}
```
