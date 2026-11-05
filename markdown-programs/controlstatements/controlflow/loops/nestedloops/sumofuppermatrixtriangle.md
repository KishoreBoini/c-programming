# Sumofuppermatrixtriangle

**C source:** `c-programs/controlstatements/controlflow/loops/nestedloops/sumofuppermatrixtriangle.c`

## C Source Code

```c
//Program for sumofuppermatrixtriangle.c

#include<stdio.h>

int main(){
	int n;
	printf("Enter the no.of r/c of matrix :");
	scanf("%d",&n);
	int matrix[n][n],sum=0;
	printf("Enetr the matrix of your choice : ");
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		scanf("%d",&matrix[i][j]);

		}
	}
	//printf("%d",matrix[n][n]);
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i<=j)
			sum+=matrix[i][j];

		}	

	}
	printf("%d\n",sum);




return 0;
}
```
