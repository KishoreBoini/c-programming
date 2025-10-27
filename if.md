## If

```c
//Program for if.c
#include<stdio.h>
int main(){
int a=34,b=54;
if (a<b)
	printf("\na is less then b");
if (a<b)
	printf("\na is greater then b");
if (a==b)
	printf("\na is equal to b");
if (a!=b)
	printf("\na is not equal to b");
if (a<=b)
	printf("\na is less ten or equal to b");
if (a>=b)
	printf("a is greater then or equal to b\n");
return 0;
}

```

## Size

```c
//Program for size.c
#include<stdio.h>
 
int main(){
int a=2;
int *ptr;
ptr=&a;
printf("%d\n",*ptr);
printf("%d\n",a);
printf("%p\n",&a);
printf("%p\n",ptr);

return 0;
}

```

## Pos

```c
//Program for pos.c
#include<stdio.h>
int main(){
int x;
printf("Enter the value :");
scanf("%d",&x);
if (x>0)
	printf("positive number :%d\n",x);
if (x<0)
	printf("not a valid number");
return 0;
}

```

## Eqaulno

```c
//Program for eqaulno.c
#include<stdio.h>

int main(){
int num1,num2;
printf("Enter the 1st num : ");
scanf("%d",&num1);
printf("Enter the 2nd  num : ");
scanf("%d",&num2);
if(num1==num2){
	printf("Equal\n");
}
else{
	printf("Not Equal\n");
}
return 0;
}

```

## Relational

```c
//Program for relational.c
#include <stdio.h>
int main(){
int x,y,a,b,c,d,e,f;
x=10,y=15;

a=x>y;
b=x>y;
c=x==y;
d=x!=y;
f=x<=y;
printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,f);



}

```

## Vote

```c
//Program for vote.c
#include<stdio.h>
int main(){
int a;
printf("Enter your age :");
scanf("%d",&a);
if (a<18)
	printf("go to school");
if (a>18)
	printf("major and eligible for voting");
return 0;
}

```

## Calculatorif

```c
//Program for calculatorif.c
#include<stdio.h>
int main(){
int a,b;
char x;
printf("Enter the 1st num : ");
scanf("%d",&a);
printf("Enter the opetaion type : ");
scanf( " %c", &x);
printf("Enter the 2nd num : ");
scanf("%d",&b);
if (x=='+'){
	r=a+b;
	printf("%d",a+b);
}
else if (x=='-')
	printf("%d",a-b);
else if (x=='*')
	printf("%d",a*b);
else if (x=='/')
	printf("%d",a/b);
else 
	printf("Invalid input");

return 0;
}

```

## Stu

```c
//Program for stu.c
#include<stdio.h>
int main(){
int a,b;
printf("Enter your marks :");
scanf("%d",&a);
printf("Enter your project score :");
scanf("%d",&b);
if ((a>=60)||(b>=70))
	printf("congradulation heres yours certificate \n");
else
	printf("not qualified for cetificate \n");
return 0;

}

```

## Evenodd

```c
//Program for evenodd.c
#include<stdio.h>
int main(){
int a;
printf("Enter the number :");
scanf("%d",&a);
if (a%2==0)
	printf("even number");
else
	printf("odd number");
return 0;
}

```

## Div511

```c
//Program for div511.c
#include <stdio.h>
int main(){
int a;
printf("Enter the number :");
scanf("%d",&a);
if ((a%5==0)&&(a%11==0))
	printf("Divisible\n");
return 0;

}

```

## Primev

```c
//Program for primev.c
#include<stdio.h>
#include<stdbool.h>

int main(){
	int num ,count= 0;
	bool a=true;
	printf("Enter th value : ");
	scanf("%d",&num );
	for(int i =2;i<num;i++){
		if (num%i==0){
			bool a=false;
			break;
		}
		 else if{
			if (a==false)
				printf("consonant\n");
				break;
			else 
				printf("prime\n");
				break;
		}
	}
	

	
return 0;	
}

```

## Result

```c
//Program for result.c
#include<stdio.h>
int main(){
int x;
printf("Enter your marks :");
scanf("%d",&x);
if (x==100)
	printf("Excelent");
else if (x>=90)
	printf("very good");
else if(x>=80)
	printf("good");
else if(x>=70)
	printf("not bad");
else if(x>=60)
	printf("need to improve");
else if(x>=50)
	printf("to go home");
else if(x>=40)
	printf("need not study");
else
	printf("go to labour work");

}

```

## Vowel

```c
//Program for vowel.c
#include<stdio.h>
int main(){
char x,a,e,i,o,u;
a='a';
e='e';
i='i';
o='o';
u='u';
printf("Enter the charcter :");
scanf("%c",&x);
if ((x==a)||(x==e)||(x==i)||(x==o)||(x==u))
	printf("vowel\n");
else
	printf("consonant\n");
return 0;
}

```

## Alphaornot

```c
//Program for alphaornot.c
#include<stdio.h>
int main(){
char a;
printf("Enter the character :");
scanf("%c",&a);
if (((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
	printf("Alpha");
else
	printf("Not an Alpha");
return 0;
}

```

## Areaofcircle

```c
//Program for areaofcircle.c
#include<stdio.h>

int main()
{
	float r,pi=3.14;
	printf("Enter the radius of the circle :");
	scanf("%f",&r);
	if(r<=0)
	{
		printf("invalid radius\n");
		return 0;
	}
	int rs;
	rs=r*r;
	printf("Area  :%.2f\n",pi*rs);
return 0;
}

```

## Transactionmem

```c
//Program for transactionmem.c
#include<stdio.h>
int main(){
	int a,b;
	int x=900,y=901,z=902;
	printf("Enter you id :");
	scanf("%d",&a);
	printf("Enter your amount :");
	scanf("%d",&b);
	if ((a==x)||(a==y)||(a==z))
		printf("welcome\n");
	else if(b>=100)
		printf("welcome\n");
	else
		printf("not a member\n");
return 0;

}

```

## Div3Or5

```c
//Program for div3or5.c
#include<stdio.h>
int main(){
int a,x,y; 
printf("Enter the number :");
scanf("%d",&a);
if ((a%3==0)&&(a%5==0))
	printf("divisible by both \n");
else if((a%3==0)||(a%5==0))
	printf("divisible by 3 or 5\n");
else
	printf("not divisible by both \n");
}

```

## Bit

```c
//Program for bit.c
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d%d",&b,&c);
printf("%d",c=a&b);
}

```

## Sizeof

```c
//Program for sizeof.c
#include<stdio.h>

int main(){
int a=5;
printf(sizeof(int));
printf(sizeof(5,"\n"));
printf(sizeof(a,"\n"));


}

```

## Randomi

```c
//Program for randomi.c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int x;
char ch ;
  printf("Guess\n");
  printf("Enter the num :");
  if (scanf("%d%c",&x,&ch)!=2||ch!='\n'){
		printf("invalid input \n");
  }
  else{
  srand(time(0));//initialize the random function
  int num = rand() % 10;//here the rand function prints random number upto the given value
  

	if (num==x){
		printf("You won\n");
  		printf("Rand =  %d\n",num);
		}	
	else if (x>10){
		printf("invalid number try numbers below 10\n");
  		
		}	
	else{
		printf("you lose\n");
  		printf("Rand =  %d\n",num);

	}

  }
return 0;
 
}

```

## Larof3

```c
//Program for larof3.c
#include<stdio.h>

int main(){
	int num1,num2,num3;
	printf("Enter the num1 : ");
	scanf("%d",&num1);
	printf("Enter the num2 : ");
	scanf("%d",&num2);
	printf("Enter the num3 : ");
	scanf("%d",&num3);
	if (num1>num2){
		if (num1>num3)
			printf("num1 is larger ");
		else
			printf("num3 id larger ");		
	}
	else{
		if (num2>num3)
			printf("num2 is larger ");
		else
			printf("num3 is larger ");		
	}
	return 0;
}

```

## Alpha

```c
//Program for alpha.c
#include<stdio.h>
int main(){
char a;
printf("Enter the character :");
scanf("%c",&a);
if ((a>='a')&&(a<='z')||(a>='A')&&(a<='Z'))
	printf("charcter\n :");
else
	printf("not a charcter :");
printf("%c\n",a);
return 0;
}

```

## Upperlowercase

```c
//Program for upperlowercase.c
#include<stdio.h>

int main(){
	char alpha;
	printf("Enter the char : ");
	scanf("%c",&alpha);
	if (alpha>='a'&&alpha<='z'){
		printf("Lower case\n");
	}
	else if (alpha>='A'&&alpha<='Z'){
		printf("upper case\n");

	}
	else
		printf("Invalid Input\n");

return 0;
}

```

## Large2

```c
//Program for large2.c
#include<stdio.h>
int main(){
int a,b;
printf("Enter 1st num :\n");
scanf("%d",&a);
printf("Enter 2nd num :\n");
scanf("%d",&b);
if (a<b)
	printf("maximum is  %d\n",b);
else
	printf("maximum is %d\n",a);
return 0;


}

```

## Alphacon

```c
//Program for alphacon.c
#include<stdio.h>

int main(){
int M,N;
printf("Enter the num1 : ");
scanf("%d",&M);
printf("Enter the num2 : ");
scanf("%d",&N);

if (M<=0){
	printf("N = 0");
}
else{
	printf("N = 1");
}

if(N<=0){
	printf("M = 0");
}
else{
	printf("M = 1");
}



return 0;
}

```

