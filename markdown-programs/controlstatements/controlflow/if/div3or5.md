# Div3Or5

**C source:** `c-programs/controlstatements/controlflow/if/div3or5.c`

## C Source Code

```c
//Program for div3or5.c
#include<stdio.h>
int main(){
int a,x,y; 
printf("Enter the number :");
scanf("%d",&a);
if ((a%3==0)&&(a%5==0))
	printf("divisible by both \n");
else if((a%3==0)||(a%5==0))
	printf("divisible by 3 or 5\n");
else
	printf("not divisible by both \n");
}
```
