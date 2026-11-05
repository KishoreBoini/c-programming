#include<stdio.h>

void DisplaylowerTriangularmatrix(int r,int c,int arr[r][c])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i>j)
			{
				printf("%d ",arr[i][j]);
			}
		}
		printf("\n");
	}

}

int main()
{
	int r,c;
	printf("Enter the rows of the matrix : ");
	scanf("%d",&r);
	printf("Enter the clomuns of the matrix : ");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter the Elements of the matrix : ");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	DisplaylowerTriangularmatrix(r,c,arr);
return 0;
}
