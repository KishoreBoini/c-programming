# armstrong

**C source:** `c-programs/controlstatements/controlflow/loops/armstrong.c`

```c
//Program for armstrong.c
#include<stdio.h>

/*int main(){
	int arm=0,num,div,cube,real;
	printf("Enter the Number : ");
	scanf("%d",&num);
	real=num;
	for ( ;num>0;num/=10)
	{
		div=num%10;
		cube=div*div*div;
		arm+=cube;

	}
	if (real==arm){
		printf("armstrong number\n");

	}
	else
		printf("non armstrong number \n");



return 0;
}*/
int main(){
	int num,rem,temp,sum;
	for (num=1;num<=1000;num++){
		temp=num;
		sum=0;
		while(temp!=0){
			rem=temp%10;
			sum+=rem*rem*rem;
			temp/=10;
		}
		if (sum==num){
			if (num==1){
				continue;

			}
			printf("%d ",num);

		}

	}
	printf("\n");

return 0;
}
```
