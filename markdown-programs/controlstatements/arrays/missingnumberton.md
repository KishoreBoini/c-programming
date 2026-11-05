# Missingnumberton

**C source:** `c-programs/controlstatements/arrays/missingnumberton.c`

## C Source Code

```c
//Program for missingnumberton.c
#include<stdio.h>

int main()
{
	int res,flag=0,Nsum=0,n,Asum=0;
	int arr[10];
	printf("Enter the no of natural numbers : ");
	scanf("%d",&n);
	printf("Enter the array elements :");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	//int arr[10]={1,2,3,5,6,7,8,9,10,11};	
	Nsum=n*(n+1)/2;
	//printf("%d\n",Nsum);
	for(int i=0;i<10;i++)
	{
		Asum+=arr[i];
	}
	res=Nsum-Asum;
	if(Asum==Nsum)
	{
		printf("No missing number!\n");
		return 0;
	}
	
	else
		printf("The missing number is : %d\n",res);
		
return 0;
}
```
