# reversethenum

**C source:** `c-programs/controlstatements/functions/reversethenum.c`

```c
//Program for reversethenum.c
#include<stdio.h>

int reverse(int );

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("The number is reversed : %d\n",reverse(num));

return 0;
}


int reverse(int n){
	int r,rev=0;

	while (n>0){
		r=n%10;
		rev=(rev*10)+r;
		n/=10;
	}
	return rev ;
	


}
```
