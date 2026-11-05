# Factorialf

**C source:** `c-programs/controlstatements/functions/factorialf.c`

## C Source Code

```c
//Program for factorialf.c
#include<stdio.h>

int factorial(   int );
int factorialr(   int );

int main(){
	int num,f,d;
	printf("Enter the number : ");
	scanf("%d",&num);
	f=factorial(num);
	d=factorialr(num);
	printf("%d\n%d\n",f,d);
return 0;
}
int factorial(int n){
	int fact=1;
	for (int i=1;i<=n;i++)
	{
		printf("%d\n",i);
		fact*=i;

	}
	return fact;

}
int factorialr(int n){
	int fact;
	printf("%d\n",n);
	if (n==1)
		return 1;
	fact=n*factorialr(n-1);

return fact;

}
```
