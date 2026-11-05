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
