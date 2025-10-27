## Countnum

```c
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

```

## Sumofenter

```c
//Program for sumofenter.c
#include<stdio.h>

int main(){
	int num,sum=0;
	char ch;
//	do{
		printf("Enter the num : ");
		
		if(scanf("%d%c",&num,&ch)==2,'\n');
			printf("Enter the numeric digit");
		
		//else
		/*	sum+=num;
			printf("number Added = %d\n",sum);
			}while(num!=0);
		*/

return 0;
}

```

