//Program for linearsearch.c
#include<stdio.h>
int linearsearch(int arr[],int elmt,i int n )
{
	int temp;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==elmt)
		{
			return i;
		}

	}
}

int main()
{
	int arr[]={1,2,35,4,5,6,7,89,10,2};
	int r,element=89;
	r=linearsearch(arr[],element,10);
	printf("The element is %d\n",r);
return 0;
}
