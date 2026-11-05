# inc

**C source:** `c-programs/controlstatements/controlflow/indec/inc.c`

```c
//Program for inc.c
#include<stdio.h>
int main(){
int i,j,z,y;
i=5;
j=16;
i++;//post increment
printf("%d\n",i);
++j;//Preincrement
printf("%d\n",j);
y=i++;//output 6
z=++j;//output 18
printf("%d\n%d",z,y);
return 0;
}
```
