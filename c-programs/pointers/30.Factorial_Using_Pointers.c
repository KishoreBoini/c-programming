#include<stdio.h>

void Factorial(int *ptr)
{
	int i=*ptr-1;
	while(i>0)
	{
		(*ptr)*=i;
		i--;
	}
}

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	Factorial(&num);
	printf("Factorial Of the given number is : %d\n",num);
return 0;
}
