# duplicateElements

**C source:** `c-programs/controlstatements/arrays/duplicateElements.c`

```c
//Program for duplicateElements.c
#include<stdio.h>

int main(){
	int temp,k=0,check,l=0;
	int arr[10]={1,1,2,3,4,5,6,6,7,8};
	int j=0;
	for (int i=0;i<10;i++){
		if (arr[i]!=arr[j])
		j++;
		int temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
	}
	for(int i=0;i<j;i++){
		printf("%d",arr[i]);
	}
	printf("\n");

return 0;
}
```
