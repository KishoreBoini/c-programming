#include<stdio.h>

void main()
{
	int val=5;
	int *ptr;
	ptr=&val;
	printf("Actual value %d\n",val);
	printf("Pre Incremant %d\n",++(*ptr));
	++(*ptr);
	printf("Pre Incremant %d\n",*ptr);
	printf("post Incremant %d\n",(*ptr)++);
	(*ptr)++;
	printf("Post Increment %d\n",*ptr);

}
