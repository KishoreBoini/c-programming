#include<stdio.h>

int main()
{
	int *val;
	char *ch;
	int n=1;
	char a='c';
	printf("size of integer pointer = %ld\n",sizeof(val));
	printf("size of interger pointer dereferecncing = %ld\n",sizeof(*val));
	printf("size of character pointer = %ld\n",sizeof(ch));
	printf("size of character pointer dereferencing = %ld\n",sizeof(*ch));


	
return 0;
}
