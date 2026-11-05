# funfact2

**C source:** `c-programs/controlstatements/functions/funfact2.c`

```c
//Program for funfact2.c
#include<stdio.h>
int fact( int );

int main(){
	int num,x;
	printf("Enter the num : ");
	scanf("%d",&num);
	if (num==0)
	{
		printf("%d Enter a valid number \n",num);
	}
	else if (num<0)
	{
		num=-num;
		x=fact(num);
		printf("factorial of negative number is %d\n",-x);

	}
	else
	{
		x=fact(num);
		printf("factoril = %d\n",x);
	}

return 0;
}
int fact(int fnum){
        int fat;
        if (fnum==0)
            return 1;
	fat=fnum*fact(fnum-1);
return fat;

}
```
