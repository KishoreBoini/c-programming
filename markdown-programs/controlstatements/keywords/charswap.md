# Charswap

**C source:** `c-programs/controlstatements/keywords/charswap.c`

## C Source Code

```c
//Program for charswap.c
#include<stdio.h>
int main(){
char a,b,temp;
printf("Enter any 2 charcter : ");
scanf("%c,%c",&a,&b);
temp=a;
a=b;
b=temp;
printf("%c,%c\n",a,b);
return 0;

}
```
