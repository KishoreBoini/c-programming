## Alphabetornot?

```c
//Program for alphabetornot?.c
#include<stdio.h>
int main(){
char a;
printf("Enter the charcter :");
scanf("%c",&a);
a>='a'&&a<='z'||a>='A'&&a<='Z'?printf("alphabet\n"):printf("not alphabet\n");
return 0;
}

```

## Leapyear?

```c
//Program for leapyear?.c
#include<stdio.h>
int main(){
int a;
printf("year :");
scanf("%d",&a);
a%4==0&&a%100!=0?printf("leap yaer\n"):printf("not leap year \n");
return 0;
}

```

## Oddeven?

```c
//Program for oddeven?.c
#include<stdio.h>
int main(){
int a;
printf("ENter the num :");
scanf("%d",&a);
a%2==0?printf("even\n"):printf("odd\n");
return 0;
}

```

## Largerof3Num?

```c
//Program for largerof3num?.c
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the number :");
scanf("%d",&a);
printf("Enter the 2nd number :");
scanf("%d",&b);
printf("Enter the 3rd number :");
scanf("%d",&c);
a>b&&a>c?printf("a is greater\n"):
	b>c?printf("b is greater\n"):printf("c is greater\n");
return 0;
}

```

## Largerof2Num

```c
//Program for largerof2num.c
#include<stdio.h>
int main(){
int a,b;
printf("Enter the number :");
scanf("%d",&a);
printf("Enter the 2nd number :");
scanf("%d",&b);
a>b?printf("a is greater"):printf("b is greater");
return 0;
}

```

