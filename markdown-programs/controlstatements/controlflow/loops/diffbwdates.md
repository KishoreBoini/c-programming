# Diffbwdates

**C source:** `c-programs/controlstatements/controlflow/loops/diffbwdates.c`

## C Source Code

```c
//Program for diffbwdates.c
#include<stdio.h>

int main()

{
	int d1,d2,d,m1,m2,m,y1,y2,y;
	printf("Enetr the first year  : ");
	scanf("%d/%d/%d",&d1,&m1,&y2);
	printf("Enetr the second year  : ");
	scanf("%d/%d/%d",&d2,&m2,&y2);
	if (y2<y1)
	{
		y=y1-y2;

	}
	else
		y=y2-y1;
	if (d2<d1){
		
		if (m2==3){

			if (y2%100!=0 && y2%400==0 || y2%4==0)
			{
				d2=d2+29;
			}			
			else if (y2%100==0 && y2%400!=0 || y2%4!=0)
			{ 	 
					d2=d2+28;
			}
			else if (m2==4 || m2==6 || m2==9 || m2==11){
				d2=d2+31;

			}
			else{
				d2=d2+30;

			}
			m2=m2-1;

		}
		
	}
	if (m2<m1){
		m2=m2+12;
		y2=y2-1;

	}
	//y=y2-y1;
	m=m2-m1;
	d=d2-d1;
	printf("%d/%d/%d\n",d,m,y);
	printf("days=%d months=%d years=%d\n",d,m,y);



return 0;
}
```
