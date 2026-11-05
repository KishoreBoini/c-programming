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
