# Vowelsinstring

**C source:** `c-programs/controlstatements/arrays/vowelsinString.c`

## C Source Code

```c
//Program for vowelsinString.c
#include<stdio.h>
#include<string.h>


int main(){
	char arr[20];
	printf("Enter the string : ");
	scanf("%s",arr);
	//char arr[10]="kishore";
	int sum=0;
	for (int i=0;i<strlen(arr);i++){
		if (arr[i] == 'a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
			sum++;
	}
	printf("%d\n",sum);


return 0;
}
```
