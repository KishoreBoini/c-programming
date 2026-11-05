#include<stdio.h>

void modify(int *a,int *b)
{
	(*a)=(*a)+(*a);
	(*b)=(*b)+(*b);

}

void main()
{
	int a=10,b=12,c;
	modify(&a,&b);
	//mutiple returns
	printf("the returned values are %d %d\n",a,b);
}
