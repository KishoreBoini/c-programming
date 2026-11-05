# romanNUm

**C source:** `c-programs/leetcode/romanNUm.c`

```c
#include<stdio.h>


int chartonum(char x);

int romanToInt(char* s) {
	int sol=0,a,b;
	char c,n;
	while(*s!='\0'){
		c=*s;
		s++;
		n=*s;
		a=chartonum(c);
		b=chartonum(n);

		if(a>=b){
			sol+=a;
		}
		else if(a<b){
			sol-=a;
		}
		
	}
	printf("%d\n",sol);
}
int chartonum(char x){
	if (x=='\0')
	{
		return 0;
	}
	int  i;	
	switch(x)
	{
		case 'I':i=1;break;
		case 'V':i=5;break;
		case 'X':i=10;break;
		case 'L':i=50;break;
		case 'C':i=100;break;
		case 'D':i=500;break;
		case 'M':i=1000;break;

	}
	return i;
}

int main(){
	char rNum[5];
	printf("Enter the roman number : ");
	scanf("%s",rNum);
	romanToInt(rNum);
}
```
