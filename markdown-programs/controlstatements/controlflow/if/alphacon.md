# Alphacon

**C source:** `c-programs/controlstatements/controlflow/if/alphacon.c`

## C Source Code

```c
//Program for alphacon.c
#include<stdio.h>

int main(){
int M,N;
printf("Enter the num1 : ");
scanf("%d",&M);
printf("Enter the num2 : ");
scanf("%d",&N);

if (M<=0){
	printf("N = 0");
}
else{
	printf("N = 1");
}

if(N<=0){
	printf("M = 0");
}
else{
	printf("M = 1");
}



return 0;
}
```
