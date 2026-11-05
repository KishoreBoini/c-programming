#include<stdio.h>

void  MatrixTranspose(int r,int c,int narr[r][c],int Tarr[r][c])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			Tarr[j][i]=narr[i][j];
		}
		

	}

}
  
  int main()
  {
          int r,c;
          printf("Enter the rows for the matrix : ");
          scanf("%d",&r);
          printf("Enter the column for the matrix : ");
          scanf("%d",&c);
          int arr[r][c];
	  int tarr[r][c];
          printf("Enter the elements of the matrix : ");
          for(int i=0;i<r;i++)
	  {
                  for(int j=0;j<c;j++)
                  {
                          scanf("%d",&arr[i][j]);
                  }
          }
	  MatrixTranspose(r,c,arr,tarr);

  
          printf("The Transpose of the given  matrix is : \n");
          for(int i=0;i<r;i++)
          {
	 	  for(int j=0;j<c;j++)
                  {
                          printf("%d ",tarr[i][j]);
                  }
                  printf("\n");
          }
  return 0;
 }

