# result

**C source:** `c-programs/controlstatements/controlflow/if/result.c`

```c
//Program for result.c
#include<stdio.h>
int main(){
int x;
printf("Enter your marks :");
scanf("%d",&x);
if (x==100)
	printf("Excelent");
else if (x>=90)
	printf("very good");
else if(x>=80)
	printf("good");
else if(x>=70)
	printf("not bad");
else if(x>=60)
	printf("need to improve");
else if(x>=50)
	printf("to go home");
else if(x>=40)
	printf("need not study");
else
	printf("go to labour work");

}
```
