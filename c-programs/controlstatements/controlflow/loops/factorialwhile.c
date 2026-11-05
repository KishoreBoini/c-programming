//Program for factorialwhile.c
#include<stdio.h>

int factorial(int n);

int main(){
	int num,res;
	printf("Enter the number : ");
	scanf("%d",&num);
	res=factorial(num);
	printf("Factorial of  %d = %d\n",num,res);
return 0;
}
int factorial(int n){
	int fact=1,i=1;
	while(i<=n){
		fact*=i;
		i++;
	}
return fact;
}
