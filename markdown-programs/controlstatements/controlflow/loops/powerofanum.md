# Powerofanum

**C source:** `c-programs/controlstatements/controlflow/loops/powerofanum.c`

## C Source Code

```c
//Program for powerofanum.c
#include<stdio.h>

int main(){
	int num=1,baseNum,power;
	printf("Enetr the number : ");
	scanf("%d",&baseNum);
	printf("Enter the power : ");
	scanf("%d",&power);
	for (int i=1;i<=power;i++){
		num*=baseNum;
	}
	printf("%d ^ %d = %d\n",baseNum,power,num);
return 0;
}
```
