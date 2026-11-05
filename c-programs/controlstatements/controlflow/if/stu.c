//Program for stu.c
#include<stdio.h>
int main(){
int a,b;
printf("Enter your marks :");
scanf("%d",&a);
printf("Enter your project score :");
scanf("%d",&b);
if ((a>=60)||(b>=70))
	printf("congradulation heres yours certificate \n");
else
	printf("not qualified for cetificate \n");
return 0;

}
