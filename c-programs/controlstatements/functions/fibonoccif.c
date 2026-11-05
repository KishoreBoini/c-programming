//Program for fibonoccif.c
#include<stdio.h>

int fabinocci(  int );

int main(){
	int fibnum,fab;
	printf("Enter the number : ");
	scanf("%d",&fibnum);
	fab=fabinocci(fibnum);
	printf("%d\n",fab);

return 0;
}
int fabinocci(int n){
	int fan;
	if (n==0)
		return 0;
	if (n==1)
		return 1;
	fan=fabinocci(n-1)+fabinocci(n-2);
return fan;

}
