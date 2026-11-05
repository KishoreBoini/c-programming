# largerof3num?

**C source:** `c-programs/controlstatements/controlflow/terinaryoperator/largerof3num?.c`

```c
//Program for largerof3num?.c
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the number :");
scanf("%d",&a);
printf("Enter the 2nd number :");
scanf("%d",&b);
printf("Enter the 3rd number :");
scanf("%d",&c);
a>b&&a>c?printf("a is greater\n"):
	b>c?printf("b is greater\n"):printf("c is greater\n");
return 0;
}
```
