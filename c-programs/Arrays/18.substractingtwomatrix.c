#include<stdio.h>

void MatrixSubstraction(int r,int c,int src[r][c],int dest[r][c],int diff[r][c])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			diff[i][j]=src[i][j]-dest[i][j];	
		}

	}

}
  
  int main()
  {
          int r,c;
          printf("Enter the rows for the matrix : ");
          scanf("%d",&r);
          printf("Enter the columns for the matrix : ");
          scanf("%d",&c);
          int arr1[r][c];
	  int arr2[r][c];
	  int diffA[r][c];
          printf("Enter the elements of the 1stmatrix : ");
          for(int i=0;i<r;i++)
	  {
                  for(int j=0;j<c;j++)
                  {
                          scanf("%d",&arr1[i][j]);
                  }
          }
          printf("Enter the elements of the 2ndmatrix : ");
          for(int i=0;i<r;i++)
          {
                  for(int j=0;j<c;j++)
                  {
                          scanf("%d",&arr2[i][j]);
                  }
          }
	  MatrixSubstraction(r,c,arr1,arr2,diffA);

  
          printf("The differece of the given %dX%d matrix is : \n",r,c);
          for(int i=0;i<r;i++)
          {
	 	  for(int j=0;j<c;j++)
                  {
                          printf("%d ",diffA[i][j]);
                  }
                  printf("\n");
          }
  return 0;
 }

