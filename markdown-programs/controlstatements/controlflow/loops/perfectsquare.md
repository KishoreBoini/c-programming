# Perfectsquare

**C source:** `c-programs/controlstatements/controlflow/loops/perfectsquare.c`

## C Source Code

```c
//Program for perfectsquare.c
#include<stdio.h>
#include<math.h>

int ifperfectsquare(int n)
{
	if(n<=1)
	{
		return 1;
	}
	int left,right;
	long long int mid;
	left=1;right=n;
	while(left<=right)
	{
		mid=left+(right-left)/2;
		int square=mid*mid;
		if(square==n)
		{
			return 1;
		}
		else if(square<n)
		{
			left=mid+1;
		}
		else
			right=mid-1;
	}
	return 0;

}

int main()
{
	int num,st,x;
	printf("Enter the number : ");
	scanf("%d",&num);
	st=sqrt(num);
	if(st*st==num)
		printf("sqrt Perfect Square!\n");
	
	else
		printf("sqrt not a perfect square!\n");
		


	x=ifperfectsquare(num);
	if(x==1)
	{
		printf("binary search perfect square \n");
	}
	else
		printf("binary search not a perfect square \n");

return 0;
}
```
