## Logic

```c
//Program for logic.c
#include<stdio.h>
int main(){
//and logic
int x=5,y=9,a,b,c,d;
a=(x<y)&&(x>>y);
b=(x>=y)&&(x<=y);
c=(x!=y)&&(x<y);
d=(x&&y);
printf("%d\n%d\n%d\n%d\n",a,b,c,d);

//or logic
int q=3,w=6,s,r,t,u;
s=(q<w)||(q>w);
r=(q==w)||(q>=w);
t=(q!=w)||(q<=w);
u=(q||w);
printf("%d\n%d\n%d\n%d\n",s,r,t,u);
return 0;

}

```

