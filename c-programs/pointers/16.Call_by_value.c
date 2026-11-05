#include<stdio.h>

void printfun(int num)
{
	num++;
	printf("This is in print fun %d\n",num+10);
}

void main()
{
	int num = 10;
	printfun(num);
	printf("This is in main %d\n",num);
}
