//Program for palindrome.c
#include<stdio.h>

int main(){
	int num,act,hlp,pal=0;
	printf("Enter the num : ");
	scanf("%d",&num);
	act=num;
	for (int i=1;num>0;i++,num/=10){
		hlp=num%10;
		pal=(pal*10)+hlp;
		printf("%d iteration work= %d\n",i,pal);
	}
	if (pal==act){
		printf("%d is a palindrome\n",pal);

	}
	else{
		printf("%d is not a palindrome to %d\n",pal,act);

	}

return 0;
}
