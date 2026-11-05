# Alphaornot

**C source:** `c-programs/controlstatements/controlflow/if/alphaornot.c`

## C Source Code

```c
//Program for alphaornot.c
#include<stdio.h>
int main(){
char a;
printf("Enter the character :");
scanf("%c",&a);
if (((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
	printf("Alpha");
else
	printf("Not an Alpha");
return 0;
}
```
