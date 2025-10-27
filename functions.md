## Binarytodec

```c
//Program for binarytodec.c
#include<stdio.h>

int DecimalNum( int );
int OctalNum(  int );


int main(){
	int num,x;
	char ch;
	printf("Enter your choice of conversion(b/o) : ");
	scanf("%c",&ch);

	printf("Enter the number : ");
	scanf("%d",&num);
	if (ch=='b')
	{	
	printf("%d\n",x=DecimalNum(num));
	}

	else if (ch=='o')
	{
		printf("%d\n",x=OctalNum(num));

	}

	else
		printf("Enter valid option :\n");
	
	
return 0;
}
int DecimalNum(int n){
	int rev,div,i,res=0,t=1;
	while(0<n){
		rev=n%10;
		div=rev;
		i=div*t;
		res+=i;
		n/=10;
		t*=2;

	}
return res;
}
int OctalNum(int n){
	int rev,div,i,res=0,e=1;
	while(n>0){
		rev=n%10;
		div=rev;
		i=div*e;
		res+=i;
		n/=10;
		e*=8;
	}
return res;


}


```

## Power

```c
//Program for power.c
#include<stdio.h>
#include<math.h>
float powerTon(int p,float n );

int main(){
	int pnum;
	float fnum,res;
	printf("Enter the number : ");
	scanf("%f",&fnum);
	printf("Enter the power : ");
	scanf("%d",&pnum);
	res= powerTon(pnum,fnum);
	printf("%f",res);
	
return 0;
}
float powerTon(int p,float n){
	int x;
	x=pow(n,p);
return x;
}

```

## Printprimenum

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

## Reversethenum

```c
//Program for reversethenum.c
#include<stdio.h>

int reverse(int );

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("The number is reversed : %d\n",reverse(num));

return 0;
}


int reverse(int n){
	int r,rev=0;

	while (n>0){
		r=n%10;
		rev=(rev*10)+r;
		n/=10;
	}
	return rev ;
	


}


```

## Areaoftriangle

```c
//Program for areaoftriangle.c
#include<stdio.h>

float AreaofTriangle() ;

int main(){
	float tri,a,b,c;
	printf("Enter the three sides of triangle  : ");
	scanf("%f%f%f",&a,&b,&c);
	tri=AreaofTriangle(a,b,c);
	if (a<b+c && b<a+c && c<b+a)
	{
		printf("%f",tri);
	}
	else
		printf("not a triangle\n");

return 0;
}
float AreaofTriangle(int a,int b,int c)
{
	float area,s;
	s=(a+b+c)/2;
	area = s*((s-a)*(s-b)*(s-c));
return area;
}

```

## Fun1

```c
//Program for fun1.c
#include<stdio.h>

int fact( int);

int main(){
	int no,x;
	printf("Enter the num :");
	scanf("%d",&no);
	printf("%d\n",x=fact(no));
return 0 ;

}
/*int fact(int num)
	{
		int mul=1,fat;
		if (num==0){
		return 1;		
		}
		for (int i=1;i<=num;i++)
		{
			mul*=i;
		}
		return mul;

	}*/
int fact(int n){
          int f=1;
          if (n==0){
          return 1;
          }
	  int f=1;
          for (int i=n;i>1;i--){
          f=f*i;
          return f;        
          
          }




}

```

## Primef

```c
//Program for primef.c
#include<stdio.h>
#include<stdbool.h>

bool isprime( int );

int main(){
	int num,p;
	printf("Enter the number : ");
	scanf("%d",&num);
	p=isprime(num);
	if (p==true){
		printf("prime\n");

	}
	else
		printf("not prime\n");

return 0;
}
bool isprime(int n){
	
	int pri;
	if (n==0)
		return 0;
	for (int i=2;i<n;i++)
	{
		pri=n%i;
		if (pri==0)
			return false;
				
	}
	return true ;

	


}

```

## Fibonoccif

```c
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

```

## Binaryfun

```c
//Program for binaryfun.c
#include<stdio.h>

int BinaryNum( int );

int main(){
	int num,b;
	printf("Enter the number : ");
	scanf("%d",&num);
	b=BinaryNum(num);
	printf("%d",b);
	

return 0;
}
int BinaryNum(int n){
	int rev, div,a=1;
	while(n>0){
		rev=n%2;
		div=div+rev*a;
		n/=2;
		a*=10;

	}
	return div;
}

```

## Factorialf

```c
//Program for factorialf.c
#include<stdio.h>

int factorial(   int );
int factorialr(   int );

int main(){
	int num,f,d;
	printf("Enter the number : ");
	scanf("%d",&num);
	f=factorial(num);
	d=factorialr(num);
	printf("%d\n%d\n",f,d);
return 0;
}
int factorial(int n){
	int fact=1;
	for (int i=1;i<=n;i++)
	{
		printf("%d\n",i);
		fact*=i;

	}
	return fact;

}
int factorialr(int n){
	int fact;
	printf("%d\n",n);
	if (n==1)
		return 1;
	fact=n*factorialr(n-1);

return fact;

}

```

## Add

```c
//Program for add.c
#include<stdio.h>
 
int SumofNum(int a,int b){
	int b=2;
	return a*b;

}

int main(void){
	int sum;
	sum=SumofNum(8,7);
	printf("%d\n",sum);
	//sum=SumofNum(1,2,3,4);
	//printf("%d\n",sum);


return 0;
}



```

## Funfact2

```c
//Program for funfact2.c
#include<stdio.h>
int fact( int );

int main(){
	int num,x;
	printf("Enter the num : ");
	scanf("%d",&num);
	if (num==0)
	{
		printf("%d Enter a valid number \n",num);
	}
	else if (num<0)
	{
		num=-num;
		x=fact(num);
		printf("factorial of negative number is %d\n",-x);

	}
	else
	{
		x=fact(num);
		printf("factoril = %d\n",x);
	}

return 0;
}
int fact(int fnum){
        int fat;
        if (fnum==0)
            return 1;
	fat=fnum*fact(fnum-1);
return fat;

}

```

