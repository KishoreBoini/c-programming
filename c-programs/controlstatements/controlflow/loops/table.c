//Program for table.c
#include<stdio.h>

int main(){
	int TableNum,limit,res=1;
	printf("Enter the table number which you want :");
	scanf("%d",&TableNum);
	printf("Enter the limit of the table :");
	scanf("%d",&limit);
	for (int i=1;i<=limit;i++){
		res=TableNum*i;
		printf("%d x %d = %d\n",TableNum,i,res);
		
	}


return 0;
}
