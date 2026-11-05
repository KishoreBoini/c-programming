# Numofwordsinstr

**C source:** `c-programs/controlstatements/arrays/NumofWordsinstr.c`

## C Source Code

```c
//Program for NumofWordsinstr.c
#include<stdio.h>
int astrlen(char *ptr);


int main(){
	char arr[20];
	printf("Enter the string : ");
	scanf("%s",arr);
	char *aptr=arr;
	int length = astrlen(aptr);
	printf("The length of the given string is : %d\n",length);
	
return 0;
}
int astrlen(char *ptr){
	int count =0;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}
return count ;

}
```
