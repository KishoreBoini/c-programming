# upperlowercase

**C source:** `c-programs/controlstatements/controlflow/if/upperlowercase.c`

```c
//Program for upperlowercase.c
#include<stdio.h>

int main(){
	char alpha;
	printf("Enter the char : ");
	scanf("%c",&alpha);
	if (alpha>='a'&&alpha<='z'){
		printf("Lower case\n");
	}
	else if (alpha>='A'&&alpha<='Z'){
		printf("upper case\n");

	}
	else
		printf("Invalid Input\n");

return 0;
}
```
