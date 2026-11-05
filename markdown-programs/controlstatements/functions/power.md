# Power

**C source:** `c-programs/controlstatements/functions/power.c`

## C Source Code

```c
//Program for power.c
#include<stdio.h>
#include<math.h>
float powerTon(int p,float n );

int main(){
	int pnum;
	float fnum,res;
	printf("Enter the number : ");
	scanf("%f",&fnum);
	printf("Enter the power : ");
	scanf("%d",&pnum);
	res= powerTon(pnum,fnum);
	printf("%f",res);
	
return 0;
}
float powerTon(int p,float n){
	int x;
	x=pow(n,p);
return x;
}
```
