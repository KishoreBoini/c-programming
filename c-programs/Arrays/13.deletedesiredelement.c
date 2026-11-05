#include<stdio.h>

int DeleteElement(int arr[],int len,int pos)
{
	for(int i=pos;i<len;i++)
	{
		arr[i]=arr[i+1];
	}
	len--;
	return len;

}

int main()
{
	int n,del,newlen;
	printf("Enter the length of thr array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the position at which you want to delete the element! : ");
	scanf("%d",&del);
	newlen=DeleteElement(arr,n,del);
	printf("ELement Deleted array : \n");
	for(int i=0;i<newlen;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
return 0;
}

