#include<stdio.h>
 
 void main()
 {
         int mat[2][2]={{1,2},{3,4}};
         int (*ptr)[2];
	 ptr=mat;
	 for(int i=0;i<2;i++)
	 {
		 for(int j=0;j<2;j++)
		 {
			 printf("Address(%p) Value[%d]\n",&(ptr[i][j]),(ptr[i][j]));
		 }
	}
	printf("Address(%p) \n",&(ptr[0][0]));
	printf("Address(%p) \n",&ptr);
}

