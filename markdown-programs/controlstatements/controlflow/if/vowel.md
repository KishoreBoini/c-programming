# vowel

**C source:** `c-programs/controlstatements/controlflow/if/vowel.c`

```c
//Program for vowel.c
#include<stdio.h>
int main(){
char x,a,e,i,o,u;
a='a';
e='e';
i='i';
o='o';
u='u';
printf("Enter the charcter :");
scanf("%c",&x);
if ((x==a)||(x==e)||(x==i)||(x==o)||(x==u))
	printf("vowel\n");
else
	printf("consonant\n");
return 0;
}
```
