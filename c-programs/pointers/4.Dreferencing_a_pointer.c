#include<stdio.h>

int main()
{
	int val=1;
	int *ptr;
	ptr=&val;
	printf("pointer = %d\n",ptr);
	printf("Dereferencing = %d\n",*ptr);

return 0;
}
