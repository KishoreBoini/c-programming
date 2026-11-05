//Program for identitymatrixornot.c
#include<stdio.h>

int main(){
	int n,div;
	printf("Enter the no.of r/c of matrix :");
	scanf("%d",&n);
	int matrix[n][n],sum=0;
	printf("Enetr the matrix of your choice : ");
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		scanf("%d",&matrix[i][j]);

		}
	}

	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i=j){
				div=i;
			}
			div*10;

		}	

	}
	if (div==n,n,n)
	printf("identity\n");
	else
		printf("not identity\n");




return 0;
}

