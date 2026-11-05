# stringLength

**C source:** `c-programs/controlstatements/arrays/stringLength.c`

```c
//Program for stringLength.c
#include<stdio.h>

int lengthstring(char* str);

int main(){
int length;
	char arr[10];
	printf("Enter the string : ");
	scanf("%s",arr);
	length=lengthstring(arr);
	printf("The length of the given string is : %d\n",length);

return 0;
}
int lengthstring(char* str){
	int count =0 ;
	
	for (  ;*str!='\0';str++){
		count++;
	}
return count ;


}
```
