#include<stdio.h>

void Frequencyofelements(int arr[],int len);

int main()
{
	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	Frequencyofelements(arr,n);

return 0;
}
void Frequencyofelements(int arr[],int len)
{
	int temp[len];
	for(int i=0;i<len;i++)
	{
		temp[i]=0;

	}
	int count,element;
	for(int i=0;i<len;i++)
	{
		if(temp[i]==0)
		{
			count=0;
			for(int j=0;j<len;j++)
			{
				if(arr[i]==arr[j])
				{
					temp[j]=1;
					count++;
					element=arr[j];
				}
			}
		
			printf("the frequency of %d is %d times \n",element,count);
		}
	}

}
