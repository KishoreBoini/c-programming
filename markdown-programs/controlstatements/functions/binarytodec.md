# binarytodec

**C source:** `c-programs/controlstatements/functions/binarytodec.c`

```c
//Program for binarytodec.c
#include<stdio.h>

int DecimalNum( int );
int OctalNum(  int );


int main(){
	int num,x;
	char ch;
	printf("Enter your choice of conversion(b/o) : ");
	scanf("%c",&ch);

	printf("Enter the number : ");
	scanf("%d",&num);
	if (ch=='b')
	{	
	printf("%d\n",x=DecimalNum(num));
	}

	else if (ch=='o')
	{
		printf("%d\n",x=OctalNum(num));

	}

	else
		printf("Enter valid option :\n");
	
	
return 0;
}
int DecimalNum(int n){
	int rev,div,i,res=0,t=1;
	while(0<n){
		rev=n%10;
		div=rev;
		i=div*t;
		res+=i;
		n/=10;
		t*=2;

	}
return res;
}
int OctalNum(int n){
	int rev,div,i,res=0,e=1;
	while(n>0){
		rev=n%10;
		div=rev;
		i=div*e;
		res+=i;
		n/=10;
		e*=8;
	}
return res;


}
```
