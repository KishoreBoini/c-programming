# Unsaduplicateelements

**C source:** `c-programs/controlstatements/arrays/unsaduplicateElements.c`

## C Source Code

```c
//Program for unsaduplicateElements.c
#include<stdio.h>

int main(){
	int arr[10]={1,5,7,1,5,2,3,1,2,3};
	int j=0,n;
	n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if (arr[i]==arr[j]){
				for(int k=j;k<n;k++){
					arr[k]=arr[k+1];
				}
				n--;
				j--;

				}
				
			}
		}
	
	for (int i=0;i<j;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");


return 0;
}
```
