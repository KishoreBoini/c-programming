# Staticfun1

**C source:** `c-programs/controlstatements/functions/staticfunctions/staticfun1.c`

## C Source Code

```c
//Program for staticfun1.c
#include<stdio.h>

int globalvar=10;
static int globalstavar=5;
char globalcvar;

void secfile( void );

void StaticNum( void );

int main()
{
	int random,x;

	StaticNum();
	
	StaticNum();
	
	StaticNum();

	secfile();
	
return 0;
}

void StaticNum(void)
{
	int random=10;
	static int staran=10;
	printf("%d %d\n",random,staran);
	random++;
	staran++;

}
```
