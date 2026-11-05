# printprimenum

**C source:** `c-programs/controlstatements/functions/printprimenum.c`

```c
//Program for printprimenum.c
#include<stdio.h>
#include<math.h>

void printPrime( int, int );
int isPrime(int);

int main(){
	int num1,num2;
	printf("Enter the number : ");
	scanf("%d%d",&num1,&num2);
	if (num1>0&&num2>0){
	printPrime(num1,num2);
	
	}
	else{
		printf("Enter the valid digits \n");

	}


return 0;
}

void printPrime(int num1 , int num2){
	
	for (int i=num1;i<=num2;i++){
		if (isPrime(i)){
			printf(" %d",i);
			
		}


	}
	printf("\n");
}

int isPrime(int n){
	if (n<2){
		return 0;
	}
	for (int j=2;j*j<=n;j++){
	
		if (n%j==0){
			return 0;
		}
	}
	
return 1;

}
```
