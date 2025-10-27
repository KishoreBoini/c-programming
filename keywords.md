## Identifier

```c
//Program for identifier.c
#include<stdio.h>
int main(){
int val;//declaration
val=34;//initialisation
printf("%d\n",val);
}

```

## Char

```c
//Program for char.c
#include<stdio.h>
int main(){
char ch;
char a;
char i=45;
a='6';
ch='l';
printf("%c,%c,%c\n",ch,a,i);
printf("%d,%d,%d\n",ch,a,i);
}

```

## Char2

```c
//Program for char2.c
//assignment
#include<stdio.h>
int main(){
char a,b,c;
a=0;
b='\0';
c='0';
printf("%c,%c,%c\n",a,b,c);
printf("%d,%d,%d\n",a,b,c);
}

```

## Chars

```c
//Program for chars.c
#include<stdio.h>

int main(){
char srinu = 'I';
char pur = 'L';
char sresta = 'U';
char num = 65;
char num1 = '65';

printf("%d\n%c\n",num,num1);




return 0;
}

```

## Charswap

```c
//Program for charswap.c
#include<stdio.h>
int main(){
char a,b,temp;
printf("Enter any 2 charcter : ");
scanf("%c,%c",&a,&b);
temp=a;
a=b;
b=temp;
printf("%c,%c\n",a,b);
return 0;

}

```

## Returnvalueofprintf

```c
//Program for returnvalueofprintf.c
#include<stdio.h>
int main(){
int x;
x=printf("linux");
printf("%d\n",x);
}

```

## Doubleincrement

```c
//Program for doubleincrement.c
#include<stdio.h>
int main()
{
char var=10;
printf("var is = %d",++var++);//error here the pre-increment acts as a operand
}

```

## Swap

```c
//Program for swap.c
#include<stdio.h>
int main(){
int a,b,temp;
printf("Enter 2 num's : " );
scanf("%d,%d",&a,&b);
temp = a;
a = b;
b = temp;
printf("swapped=%d,%d\n",a,b);
return 0;
}

```

## Arthsawp

```c
//Program for arthsawp.c
#include<stdio.h>
int main(){
int a,b;
printf("Enter the 2 num's : ");
scanf("%d,%d",&a,&b);
a=b-a;
b=b-a;
a=b+a;
printf("swapped a = %d ,b = %d\n",a,b);
return 0;
}

```

## Returnvalueofprntf

```c
//Program for returnvalueofprntf.c
#include<stdio.h>
int main(){
int a;
a=printf("hello world\n");
printf("%d\n",a);

}

```

