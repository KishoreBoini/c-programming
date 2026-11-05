# Uppertriansum

**C source:** `c-programs/controlstatements/2dArrays/uppertriansum.c`

## C Source Code

```c
//Program for uppertriansum.c
#include<stdio.h>

int main(){
	//int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int a,b;
	printf("Enter the rows and columns for matrix : ");
	scanf("%d%d",&a,&b);
	int arr[a][b];
	printf("Enter the elements of matrix :");
	for (int i=0; i<a; i++){
		for (int j=0; j<b;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int sum=0;
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<b; j++){
			if (j>=i){
			printf("%d ",arr[i][j]);
		
			sum+=arr[i][j];
			}
			else{
				printf("  ");

			}
		}
		printf("\n");
	}
	//printf("\n");
	printf("%d\n",sum);

return 0;
}
```
