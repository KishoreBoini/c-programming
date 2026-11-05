#include<stdio.h>

int  Matrixequality(int row,int col,int src1[row][col],int src2[row][col])
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(src1[i][j]!=src2[i][j])
			{
				return 1;
			}
		}

	}
	return 0;

}
  
  int main()
  {
          int r1,c1,r2,c2,re;
          printf("Enter the rows for the 1st matrix : ");
          scanf("%d",&r1);
          printf("Enter the columns for the 1st matrix : ");
          scanf("%d",&c1);
          printf("Enter the rows for the 2nd matrix : ");
          scanf("%d",&r2);
          printf("Enter the columns for the 2nd matrix : ");
          scanf("%d",&c2);
	  if(r1!=r2 || c1!=c2)
	  {
		  printf("Not an Equal Matrix \n");
		  printf("Dimensions did not match \n");
		  return 0;

	  }
          int arr1[r1][c1];
	  int arr2[r2][c2];
	  printf("Enter the elements of the 1st matrix : ");
          for(int i=0;i<r1;i++)
	  {
                  for(int j=0;j<c1;j++)
                  {
                          scanf("%d",&arr1[i][j]);
                  }
          }
          printf("Enter the elements of the 2nd matrix : ");
          for(int i=0;i<r2;i++)
          {
                  for(int j=0;j<c2;j++)
                  {
                          scanf("%d",&arr2[i][j]);
                  }
          }
	  re=Matrixequality(r1,c1,arr1,arr2);
	  if(re)
	  {
		  printf("Give two matrix are Not Equal\n");
	  }
	  else
		  printf("Given two Matrix are Equal\n");
  return 0;
 }

