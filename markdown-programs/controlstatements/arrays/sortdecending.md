# sortdecending

**C source:** `c-programs/controlstatements/arrays/sortdecending.c`

```c
//Program for sortdecending.c
#include<stdio.h>

int main(){
	int arr[10]={5,8,9,2,3,4,5,3,7,9};
	int n=(sizeof(arr))/sizeof arr[0];
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (arr[i]<arr[j]){
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
