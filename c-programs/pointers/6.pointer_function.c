#include<stdio.h>

void main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("The value of a using pointer %d\n",*(ptr));
	printf("The Address of a %p amd the Address of pointer ptr %p\n",&a,&ptr);
}
