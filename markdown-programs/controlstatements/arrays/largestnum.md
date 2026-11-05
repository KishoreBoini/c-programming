# largestnum

**C source:** `c-programs/controlstatements/arrays/largestnum.c`

```c
//Program for largestnum.c
#include<stdio.h>

int main(){
	int n,temp;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the arry elements : ");
	for (int i=0; i<n; i++){
		scanf("%d",&arr[i]);

	}
	//int arr[5]={1,5,7,9,2};
	temp=arr[0];
	for (int i=0; i<n; i++){
		if (arr[i]>temp){
			temp=arr[i];			
		}	
	
	}
	printf("%d\n",temp);
return 0;
}
```
