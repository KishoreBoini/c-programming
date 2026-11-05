//Program for fabinochiseries.c
#include<stdio.h>

int main(){
	int num,x=0,y=1,z;
	printf("Enter the num : ");
	scanf("%d",&num);
	printf("%d  ",y);
	for(int i=1;i<=num;i++)
	{
		z=x+y;
		printf("%d  ",z );
		x=y;
		y=z;
	}
	printf("\n");

return 0;
}
