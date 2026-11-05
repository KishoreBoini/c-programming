# Larof3

**C source:** `c-programs/controlstatements/controlflow/if/larof3.c`

## C Source Code

```c
//Program for larof3.c
#include<stdio.h>

int main(){
	int num1,num2,num3;
	printf("Enter the num1 : ");
	scanf("%d",&num1);
	printf("Enter the num2 : ");
	scanf("%d",&num2);
	printf("Enter the num3 : ");
	scanf("%d",&num3);
	if (num1>num2){
		if (num1>num3)
			printf("num1 is larger ");
		else
			printf("num3 id larger ");		
	}
	else{
		if (num2>num3)
			printf("num2 is larger ");
		else
			printf("num3 is larger ");		
	}
	return 0;
}
```
