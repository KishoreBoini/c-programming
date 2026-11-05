#include<stdio.h>

int Element(int len,int Earr[],int sch)
{
	for(int i=0;i<len;i++)
	{
		if(Earr[i]==sch)
		{
			return 1;
		}
	}
return 0;
}  

int main()
{
	int n,e,re;
	printf("Enter the size of the Array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	printf("Enter the Element you want to search for : ");
	scanf("%d",&e);
	re=Element(n,arr,e);
	if(re)
	
		printf("Given Element is present in Array!\n");
	
	else
		printf("Given Element is not present in the Array!!\n");
return 0;
}
