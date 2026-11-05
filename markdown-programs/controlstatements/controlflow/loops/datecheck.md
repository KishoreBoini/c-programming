# datecheck

**C source:** `c-programs/controlstatements/controlflow/loops/datecheck.c`

```c
//Program for datecheck.c
#include<stdio.h>

int main()
{
	int d,m,y;
	int isleap=1,flag=1;
	printf("Enter the date(dd/mm/yyyy) :");
	scanf("%d/%d/%d",&d,&m,&y);

	if (y%100!=0 && y%400==0 || y%4==0){
		isleap=0;
	}
		
	if (y<1850 ||  y>2040 ||m<1 || m>12 || d<1 || d>31)
	{
		flag=0;

	}
	else if (m==2)
	{
		(d==31 || d==30 || (d==29 && !isleap));
			flag=0;

	}
	else if(m==4 || m==6 || m==9 || m==11)
	{
		(d==31);
		flag=0;

	}
	if (flag==0){
		printf("not a valid date \n");
	}
	else if (isleap==0 && flag==1 )
	{
		printf("Valid date & leap year too!\n");
	
	}
	else
		printf("valid date \n");


return 0;
}
```
