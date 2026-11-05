#include<stdio.h>

void printfun(int *num)
{
	(*num)++;
	printf("This is in printfun block %d\n",(*num)+10);
}


void main()
{
	int num=10;
	printfun(&num);
	printf("This is in Mian block %d\n",num);
}
