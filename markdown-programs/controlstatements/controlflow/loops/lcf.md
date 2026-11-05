# Lcf

**C source:** `c-programs/controlstatements/controlflow/loops/lcf.c`

## C Source Code

```c
//Program for lcf.c
#include<stdio.h>

int main(){
	int num1,num2,max,min,lcf=1;
	printf("Enter the 2 numbers :");
	scanf("%d %d",&num1,&num2);
	if(num1<num2){
		min=num1;
		max=num2;
	}
	else{
		min=num2;
		max=num1;

	}
	
	for (int i=max;i>=min;i--){
		if (i==2){
			break;

		}
		
		if(num1%i==0 && num2%i==0){
				lcf=i;

			}

		}
	printf("%d\n",lcf);
	
return 0;
}
```
