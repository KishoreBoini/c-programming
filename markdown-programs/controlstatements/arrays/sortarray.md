# Sortarray

**C source:** `c-programs/controlstatements/arrays/sortarray.c`

## C Source Code

```c
//Program for sortarray.c
#include<stdio.h>

int main(){
	int arr[10]={2,8,2,0,1,7,9,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");


return 0;
}
```
