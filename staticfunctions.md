## Staticfun1

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

## Staticfun2

```c
//Program for staticfun2.c
#include<stdio.h>

void secfile( void );

extern char globalcvar;
extern int globalvar;
//extern int globalstavar; 

//void secfile( void );

/*int main()
{
	int secA=2;

return 0;
}*/

void secfile(void)
{
	int x;
	//int y=globalstavar;y++;
	char ch=globalcvar;
	ch='h';
	x=globalvar;
	x++;

	printf("second file o/p %d %c \n",x,ch);

}

```

