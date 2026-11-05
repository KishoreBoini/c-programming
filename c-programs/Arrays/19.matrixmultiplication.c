#include<stdio.h>

void  MatrixAddtion(int r,int c,int src[r][c],int dest[r][c],int pro[r][c])
{										//1 2 3  1 2 3
										//4 5 6  5 6 7
										//7 8 9  3 4 1
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			pro[i][j]=0;
			for(int k=0;k<c;k++)
			{
				pro[i][j]+=src[i][k]*dest[k][j];
			}
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
	  int pro[r][c];
          printf("Enter the elements of the 1st matrix : ");
          for(int i=0;i<r;i++)
	  {
                  for(int j=0;j<c;j++)
                  {
                          scanf("%d",&arr1[i][j]);
                  }
          }
          printf("Enter the elements of the 2nd matrix : ");
          for(int i=0;i<r;i++)
          {
                  for(int j=0;j<c;j++)
                  {
                          scanf("%d",&arr2[i][j]);
                  }
          }
	  MatrixAddtion(r,c,arr1,arr2,pro);

  
          printf("The product of the given %dX%d matrix is : \n",r,c);
          for(int i=0;i<r;i++)
          {
	 	  for(int j=0;j<c;j++)
                  {
                          printf("%d ",pro[i][j]);
                  }
                  printf("\n");
          }
  return 0;
 }

