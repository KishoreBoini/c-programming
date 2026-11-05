# sumofevenoddofnum

**C source:** `c-programs/controlstatements/controlflow/loops/sumofevenoddofnum.c`

```c
//Program for sumofevenoddofnum.c
#include<stdio.h>

int main()
{
	int rem,Esum=0,Osum=0;
	long long int num;
	printf("Enter the number : ");
	scanf("%lld",&num);
		while(num>0)
		{
			rem=num%10;
			if(rem%2==0)
			{
				Esum+=rem;
			}
			else
			{			
				Osum+=rem;
			}
			num/=10;			
		}
	printf("The sum of odd numbers in  the given number is :%d\n",Osum);
	printf("The sum of even numbers in  the given number is :%d\n",Esum);

return 0;
}
```
