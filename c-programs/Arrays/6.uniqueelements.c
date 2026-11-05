#include<stdio.h>


void duplicateelements(int arr[],int n)
{
	int j=0,i=1;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				j--;
				n--;
			}
		}

	}

	for(int k=0;k<n;k++)
	{
		printf("%d ",arr[k]);
	}
	printf("\n");

}

int main()
{
	int arr[10]={1,2,3,1,4,5,2,4,5,7};
//	printf("Enter the elemnts of this array : ");
	int len=sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<len;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
	duplicateelements(arr,len);


return 0;
}
