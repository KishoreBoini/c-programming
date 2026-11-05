# alpha

**C source:** `c-programs/controlstatements/controlflow/if/alpha.c`

```c
//Program for alpha.c
#include<stdio.h>
int main(){
char a;
printf("Enter the character :");
scanf("%c",&a);
if ((a>='a')&&(a<='z')||(a>='A')&&(a<='Z'))
	printf("charcter : ");
else
	printf("not a charcter :");
printf("%c\n",a);
return 0;
}
```
