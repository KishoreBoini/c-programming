//Program for twoarraysequalornot.c
#include<stdio.h>

int main()
{
	int flag=0;
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={0,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag)
		printf("not equal\n");
	else
		printf("equal\n");
}
