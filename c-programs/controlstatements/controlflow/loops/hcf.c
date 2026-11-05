//Program for hcf.c
#include<stdio.h>

int main(){
	int num1,num2,i=1,n,hcf=1;
	printf("Enter the 2 numbers : ");
	scanf("%d %d",&num1,&num2);
	if(num1<num2){
		n=num1;
	}
	else{
		n=num2;
	}
	while(i<=n){
		if (num1%i==0 && num2%i==0){
			hcf=i;
		
		}
		i++;
	}
	printf("%d\n",hcf);

return 0;
}
