#include<stdio.h>

int Sub(int a,int b)
{
	return a-b;
}

int invoke(int (*ptr)(int,int))
{
	return ptr(20,6);

}

int main()
{
	int ret;
	int (*ptr)(int,int)=Sub;
	ret=invoke(ptr);	
	printf("Diffrence = %d\n",ret);
return 0;
}
