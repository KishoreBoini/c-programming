# Dec

**C source:** `c-programs/controlstatements/controlflow/indec/dec.c`

## C Source Code

```c
//Program for dec.c
#include<stdio.h>
int main(){
int i,j,z,y;
i=3;
j=7;
i--;//post decrement
--j;//pre decrement
printf("%d\n%d",i,j);
z=i--;//output 2
y=--j;//output 5
printf("\n%d\n%d",z,y);
return 0;
}
```
