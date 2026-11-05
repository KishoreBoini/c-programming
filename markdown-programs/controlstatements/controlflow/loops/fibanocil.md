# Fibanocil

**C source:** `c-programs/controlstatements/controlflow/loops/fibanocil.c`

## C Source Code

```c
//Program for fibanocil.c
#include<stdio.h>

int main(){
	int n,num1=1,num2=0,nextnum;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=0; i<=n; i++){
		if (i<=1){
			nextnum=i;			
			//printf("%d ",nextnum);	
		}
		else{
		nextnum=num1+num2;
		num2=num1;
		num1=nextnum;
		}
		printf("%d ",nextnum);	
	}
	printf("\n");

return 0;
}
```
