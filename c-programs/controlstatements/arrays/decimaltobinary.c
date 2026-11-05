//Program for decimaltobinary.c
#include<stdio.h>

int main(){
	int arr[16];
	int n,i=0;
	printf("Enter a decimal number : ");
	scanf("%d",&n);
	for ( ;n>0;i++)
	{
		arr[i]=n%2;
		n/=2;

	}
	for (int j=i-1;j>=0;j--)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");




return 0;
}
