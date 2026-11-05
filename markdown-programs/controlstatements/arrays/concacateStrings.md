# Concacatestrings

**C source:** `c-programs/controlstatements/arrays/concacateStrings.c`

## C Source Code

```c
//Program for concacateStrings.c
#include<stdio.h>
#include<string.h>

char* astrcat(char *dest,char *src);

int main(){
	char *res;
	char arr1[10];
	printf("Enter 1st the srting :");
	scanf("%s",arr1);
	char arr2[10];
	printf("Enter 2nd the srting :");
	scanf("%s",arr2);
	res=astrcat(arr1,arr2);
	printf("%s\n",res);

	
}

char* astrcat(char *dest,char *src){
	char *d=dest;
	while(*dest!='\0'){
		dest++;
	}
	while(*dest=*src){
		dest++;
		src++;
	}
	return d;

}
```
