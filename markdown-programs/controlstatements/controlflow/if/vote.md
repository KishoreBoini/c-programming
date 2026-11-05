# Vote

**C source:** `c-programs/controlstatements/controlflow/if/vote.c`

## C Source Code

```c
//Program for vote.c
#include<stdio.h>
int main(){
int a;
printf("Enter your age :");
scanf("%d",&a);
if (a<18)
	printf("go to school");
if (a>18)
	printf("major and eligible for voting");
return 0;
}
```
