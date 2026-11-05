# palindroml

**C source:** `c-programs/controlstatements/controlflow/loops/palindroml.c`

```c
//Program for palindroml.c
#include<stdio.h>

int main(){
	int num,pal=0,re,real;
	printf("Enter the NUmber : ");
	scanf("%d",&num);
	real=num;
	while (0<num)
	{
		re=num%10;
		pal=(pal*10)+re;
		num/=10;

	}
	if (real==pal)
	{
		printf("%d is palindrome",pal);

	}
	else
		printf("%d is not a palindrome",pal);


return 0;
}
```
