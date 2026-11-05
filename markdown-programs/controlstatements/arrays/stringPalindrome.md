# stringPalindrome

**C source:** `c-programs/controlstatements/arrays/stringPalindrome.c`

```c
//Program for stringPalindrome.c
#include<stdio.h>
#include<string.h>

int main(){
	char arr[10];
	printf("Enter the string :");
	scanf("%s",arr);
	int flag=0 ;
	int length=strlen(arr);
	for (int i=0,j=length-1;i<length/2;i++,j--){
		if (arr[i]!=arr[j]){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("palindrome\n");

	}
	else
		printf("not a palindrome\n");

	
return 0;
}
```
