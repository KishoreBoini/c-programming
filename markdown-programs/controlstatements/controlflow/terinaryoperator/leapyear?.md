# leapyear?

**C source:** `c-programs/controlstatements/controlflow/terinaryoperator/leapyear?.c`

```c
//Program for leapyear?.c
#include<stdio.h>
int main(){
int a;
printf("year :");
scanf("%d",&a);
a%4==0&&a%100!=0?printf("leap yaer\n"):printf("not leap year \n");
return 0;
}
```
