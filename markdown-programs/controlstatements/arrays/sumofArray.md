# Sumofarray

**C source:** `c-programs/controlstatements/arrays/sumofArray.c`

## C Source Code

```c
//Program for sumofArray.c
#include<stdio.h>

int main(){
	int a,i=0;
	printf("Enetr the size of the array :");
	scanf("%d",&a);
	int arr[a];
	printf("Enter the elements of the array :");
	while (i<a){
		scanf("%d",&arr[i]);
		i++;
	}

	
	//int arr[5]={1,2,3,4,5};
	int sum=0;
	i=0;
	
	while (i<a){
		sum+=arr[i];
		i++;
	}
	printf("%d\n",sum);

return 0;
}
```
