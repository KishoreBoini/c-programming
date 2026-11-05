# secondlargestnuminarr

**C source:** `c-programs/controlstatements/arrays/secondlargestnuminarr.c`

```c
//Program for secondlargestnuminarr.c
#include<stdio.h>
int SecondLargestnuminArray(int *arr );

int main(){
	int arr[10];
	int i=0,res;
	while(i<10){
	printf("Enter the array elements :");
	scanf("%d",&arr[i]);
	i++;
	}
	printf("The 2nd largest Num is :%d\n",res=SecondLargestnuminArray(arr));

	
return 0;
}
int SecondLargestnuminArray(int *arr ){
	int max=arr[0],max2;

	for(int i=0;i<10;i++){
		max=max2;
		if (arr[i]>arr[i+1]){
			max=arr[i];
			
		}
	}
		
return max2;
}}
```
