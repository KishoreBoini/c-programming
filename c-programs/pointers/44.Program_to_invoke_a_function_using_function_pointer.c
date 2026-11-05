#include<stdio.h>

int Add(int a,int b)
{
	return a+b;
}

int main()
{
	int (*ptr)(int,int)=&Add;
	int ret=ptr(10,4);
	printf("sum = %d\n",ret);
return 0;
}
