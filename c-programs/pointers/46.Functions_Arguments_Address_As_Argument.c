#include<stdio.h>

int Square(int *sptr)
{
	return (*sptr)*(*sptr);
}

int main()
{
	int a=10,*ptr,ret;
	ptr=&a;
	ret=Square(ptr);
	printf("Square = %d\n",ret);
return 0;
}
