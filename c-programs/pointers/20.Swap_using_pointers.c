#include<stdio.h>

void main()
{
	int a=12,b=9;
	int *ptr1;
	int *ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("Before swap a=%d  b=%d\n",a,b);
	(*ptr1)=(*ptr1)^(*ptr2);
	(*ptr2)=(*ptr2)^(*ptr1);
	(*ptr1)=(*ptr1)^(*ptr2);
	printf("After swap a=%d  b=%d\n",a,b);

}
