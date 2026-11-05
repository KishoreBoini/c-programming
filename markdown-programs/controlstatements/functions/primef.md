# primef

**C source:** `c-programs/controlstatements/functions/primef.c`

```c
//Program for primef.c
#include<stdio.h>
#include<stdbool.h>

bool isprime( int );

int main(){
	int num,p;
	printf("Enter the number : ");
	scanf("%d",&num);
	p=isprime(num);
	if (p==true){
		printf("prime\n");

	}
	else
		printf("not prime\n");

return 0;
}
bool isprime(int n){
	
	int pri;
	if (n==0)
		return 0;
	for (int i=2;i<n;i++)
	{
		pri=n%i;
		if (pri==0)
			return false;
				
	}
	return true ;

	


}
```
