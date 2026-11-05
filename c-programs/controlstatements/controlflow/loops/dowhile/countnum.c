//Program for countnum.c
#include<stdio.h>

int main(){
	long long num,count=0;
	printf("Enter the num : ");
	scanf("%lld",&num);
	if (num==0){
		count++;
	}
	else{
		if (num<0)
			num=-num;

		
	do {
		num/=10;
		count++;
	}while(num!=0);
	}	
	printf("The count is = %lld\n",count);


return 0;
}
