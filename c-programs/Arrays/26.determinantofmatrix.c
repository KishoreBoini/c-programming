#include<stdio.h>

void getCofactor(int r,int c,int n,int mat[n][n],int temp[n-1][n-1])
{
	int i=0,j=0;
	for(int row=0;row<n;row++)
	{
		for(int col=0;col<n;col++)
		{
			if(row!=r && col!=c)
			{
				temp[i][j++]=mat[row][col];
			}
			if(j==n-1)
			{
				j=0;
				i++;
			}
		}

	}
}

int Determinant(int n,int m[n][n])
{
	int det=0,temp[n-1][n-1],sign =1;;
	if(n==1)
	{
		return m[0][0];
	}
	if(n==2)
	{
		return m[0][0]*m[1][1]-m[0][1]*m[1][0];
	}
	for(int x=0;x<n;x++)
	{
		getCofactor(0,x,n,m,temp);
	
	det+=sign*m[0][x]*Determinant(n-1,temp);
	
	sign=-sign;
	}
return det;
}


int main()
{
	int n,deter;
	printf("Enter the dimensions of matrix [n][n] : ");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter the matrix Elements : ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}

	}
	printf("Given %dX%d matrix : \n",n,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");

	}
	deter=Determinant(n,arr);
	printf("The Determinant of the Given %dX%d matrix is : %d\n",n,n,deter);
}
