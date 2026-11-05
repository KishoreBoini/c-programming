//Program for lcm.c
#include<stdio.h>

int main(){
	int num1,num2,lcm,max;
	printf("Enter the two number's : ");
	scanf("%d %d",&num1,&num2);
	if (num1>num2){
		max=num1;
	}
	else{
		max=num2;
	}

	for (int i=max; ;i++){
		if (i%num1==0 && i%num2==0){
			lcm=i;
			break;
		}
	}
	printf("The LCM of the given number is :%d\n",lcm);

return 0;
}
