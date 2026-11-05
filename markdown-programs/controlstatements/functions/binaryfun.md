# Binaryfun

**C source:** `c-programs/controlstatements/functions/binaryfun.c`

## C Source Code

```c
//Program for binaryfun.c
#include<stdio.h>

int BinaryNum( int );

int main(){
	int num,b;
	printf("Enter the number : ");
	scanf("%d",&num);
	b=BinaryNum(num);
	printf("%d",b);
	

return 0;
}
int BinaryNum(int n){
	int rev, div,a=1;
	while(n>0){
		rev=n%2;
		div=div+rev*a;
		n/=2;
		a*=10;

	}
	return div;
}
```
