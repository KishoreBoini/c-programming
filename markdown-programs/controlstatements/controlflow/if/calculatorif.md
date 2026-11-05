# calculatorif

**C source:** `c-programs/controlstatements/controlflow/if/calculatorif.c`

```c
//Program for calculatorif.c
#include<stdio.h>
int main(){
int a,b;
char x;
printf("Enter the 1st num : ");
scanf("%d",&a);
printf("Enter the opetaion type : ");
scanf( " %c", &x);
printf("Enter the 2nd num : ");
scanf("%d",&b);
if (x=='+'){
	r=a+b;
	printf("%d",a+b);
}
else if (x=='-')
	printf("%d",a-b);
else if (x=='*')
	printf("%d",a*b);
else if (x=='/')
	printf("%d",a/b);
else 
	printf("Invalid input");

return 0;
}
```
