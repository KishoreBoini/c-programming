## Powerofanum

```c
//Program for powerofanum.c
#include<stdio.h>

int main(){
	int num=1,baseNum,power;
	printf("Enetr the number : ");
	scanf("%d",&baseNum);
	printf("Enter the power : ");
	scanf("%d",&power);
	for (int i=1;i<=power;i++){
		num*=baseNum;
	}
	printf("%d ^ %d = %d\n",baseNum,power,num);
return 0;
}

```

## Perfectsquare

```c
//Program for perfectsquare.c
#include<stdio.h>
#include<math.h>

int ifperfectsquare(int n)
{
	if(n<=1)
	{
		return 1;
	}
	int left,right;
	long long int mid;
	left=1;right=n;
	while(left<=right)
	{
		mid=left+(right-left)/2;
		int square=mid*mid;
		if(square==n)
		{
			return 1;
		}
		else if(square<n)
		{
			left=mid+1;
		}
		else
			right=mid-1;
	}
	return 0;

}

int main()
{
	int num,st,x;
	printf("Enter the number : ");
	scanf("%d",&num);
	st=sqrt(num);
	if(st*st==num)
		printf("sqrt Perfect Square!\n");
	
	else
		printf("sqrt not a perfect square!\n");
		


	x=ifperfectsquare(num);
	if(x==1)
	{
		printf("binary search perfect square \n");
	}
	else
		printf("binary search not a perfect square \n");

return 0;
}

```

## Hcf

```c
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

```

## Eventon

```c
//Program for eventon.c
#include<stdio.h>

int main(){
	int Enum;
	printf("Enter the num : ");
	scanf("%d",&Enum);
	for (int i=1;i<=Enum;i++){
		if (i%2==0){
			printf("%d ",i);
			
		}
	}
	printf("\n");

return 0;
}

```

## Fabinochiseries

```c
//Program for fabinochiseries.c
#include<stdio.h>

int main(){
	int num,x=0,y=1,z;
	printf("Enter the num : ");
	scanf("%d",&num);
	printf("%d  ",y);
	for(int i=1;i<=num;i++)
	{
		z=x+y;
		printf("%d  ",z );
		x=y;
		y=z;
	}
	printf("\n");

return 0;
}

```

## Powerofnum

```c
//Program for powerofnum.c
#include<stdio.h>

int main()
{
	int baseNum,exp,power=1;
	printf("Enetr the base number : ");
	scanf("%d",&baseNum);
	printf("Enter the exponent :");
	scanf("%d",&exp);
	for(int i=1;i<=exp;i++)
	{
		power*=baseNum;
	}
	printf("The power of %d to %d is :%d\n",baseNum,exp,power);
return 0;
}

```

## Fibanocil

```c
//Program for fibanocil.c
#include<stdio.h>

int main(){
	int n,num1=1,num2=0,nextnum;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (int i=0; i<=n; i++){
		if (i<=1){
			nextnum=i;			
			//printf("%d ",nextnum);	
		}
		else{
		nextnum=num1+num2;
		num2=num1;
		num1=nextnum;
		}
		printf("%d ",nextnum);	
	}
	printf("\n");

return 0;
}

```

## Commainloop

```c
//Program for commainloop.c
#include<stdio.h>

int main(){
	int num,i=0,j=0;
	printf("Enter the num : ");
	scanf("%d",&num);
	for ( ;i<num,j<num+4;i++,j++){
		printf("i = %d j = %d\n",i,j);
		}

	printf("\ni=%d   j=%d\n",i,j);



return 0;
}

```

## Datecheck

```c
//Program for datecheck.c
#include<stdio.h>

int main()
{
	int d,m,y;
	int isleap=1,flag=1;
	printf("Enter the date(dd/mm/yyyy) :");
	scanf("%d/%d/%d",&d,&m,&y);

	if (y%100!=0 && y%400==0 || y%4==0){
		isleap=0;
	}
		
	if (y<1850 ||  y>2040 ||m<1 || m>12 || d<1 || d>31)
	{
		flag=0;

	}
	else if (m==2)
	{
		(d==31 || d==30 || (d==29 && !isleap));
			flag=0;

	}
	else if(m==4 || m==6 || m==9 || m==11)
	{
		(d==31);
		flag=0;

	}
	if (flag==0){
		printf("not a valid date \n");
	}
	else if (isleap==0 && flag==1 )
	{
		printf("Valid date & leap year too!\n");
	
	}
	else
		printf("valid date \n");


return 0;
}

```

## Sumofevenoddofnum

```c
//Program for sumofevenoddofnum.c
#include<stdio.h>

int main()
{
	int rem,Esum=0,Osum=0;
	long long int num;
	printf("Enter the number : ");
	scanf("%lld",&num);
		while(num>0)
		{
			rem=num%10;
			if(rem%2==0)
			{
				Esum+=rem;
			}
			else
			{			
				Osum+=rem;
			}
			num/=10;			
		}
	printf("The sum of odd numbers in  the given number is :%d\n",Osum);
	printf("The sum of even numbers in  the given number is :%d\n",Esum);

return 0;
}

```

## Oddsum

```c
//Program for oddsum.c
#include<stdio.h>

int main()
{
	int num1,num2,sum=0;
	printf("Enter the numbers : ");
	scanf("%d%d",&num1,&num2);
	for(int i=num1;i<=num2;i++)
	{
		if(i%2!=0)
		{
			sum+=i;
		}
	}
	printf("sum of odd numbers b/w %d - %d is : %d\n",num1,num2,sum);



return 0;
}

```

## Palindroml

```c
//Program for palindroml.c
#include<stdio.h>

int main(){
	int num,pal=0,re,real;
	printf("Enter the NUmber : ");
	scanf("%d",&num);
	real=num;
	while (0<num)
	{
		re=num%10;
		pal=(pal*10)+re;
		num/=10;

	}
	if (real==pal)
	{
		printf("%d is palindrome",pal);

	}
	else
		printf("%d is not a palindrome",pal);


return 0;
}

```

## Factorialwhile

```c
//Program for factorialwhile.c
#include<stdio.h>

int factorial(int n);

int main(){
	int num,res;
	printf("Enter the number : ");
	scanf("%d",&num);
	res=factorial(num);
	printf("Factorial of  %d = %d\n",num,res);
return 0;
}
int factorial(int n){
	int fact=1,i=1;
	while(i<=n){
		fact*=i;
		i++;
	}
return fact;
}

```

## Sumofnnatunotdiv3O5

```c
//Program for sumofnnatunotdiv3o5.c
#include<stdio.h>

int main()
{
	int num;
	long long int sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1;i<num;i++)
	{
		if(i%3!=0 && i%5!=0)
		{
			sum+=i;
		}
	}
	printf("some of %d natural numbers which are not divisible by 3 or 5 is :%lld\n",num,sum);

return 0;
}

```

## Seriessum

```c
//Program for seriessum.c
#include<stdio.h>

int main(void){
	int i,n,sum=0,term=1;
	printf("Enter the terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=term;
		term+=i;	
	
	}
	printf("The sum of series upto %d terms is %d\n",n,sum);

return 0;
}

```

## Guessthenum

```c
//Program for guessthenum.c
//Guess the number Game 

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
int x,i,num,a=10;//decclaration of integers
char o='n',p='y',y,s;//declaration of characters
for (int chance=0;chance<4;chance++){
   while(s!='n' && s!='y'){
	printf("want to play Guess the number...? (y/n) :");
	scanf("%c",&s);
		if((s!='y')&&(s!='n')){
			printf("Select Yes or No correctly \n");//this block is for checking if the user enters y/n correctly
				}
		while(getchar()!='\n');

   }
		
		if (s==o){
			printf("OK no problem try sometimes else  \n");	//here if user chooses to not play this message will pop
			return 1;	
		}	
		else if(s==p) {
			printf("Let's Go \n");//if user wants to play this message will pop up
		}
		

   

	srand(time(0));//declaration of random number generator
	num = rand () % a;//initialization of random number generator and telling it to generate number upto threshold value 
	printf("Guess\n");
	printf("You will get only 3 chances to guess the correct number \n");
Check:
	while(1){
	printf("Enter the number : ");
	if(scanf("%d%c",&x,&y)!=2||y!='\n'){//1.0 checking if user enters integer value only if user enters other datatypes it will reject & print below message
		printf("How about you try a integer value  \n");
		
		while(getchar()!='\n');

		}
		else{
			break;


		}
	}
	 if((x,y)==2||y=='\n'){//same as 1.0  

		if (x>a){
			printf("Try numbers %d or lessthen %d \n",a,a);//this block is responsible for not taking values above the threshold value in this case it is 10

			goto Next;
		}
		else{
Next:

			for(i=1;i<3;i++){
				if (x==num){
				printf("The Random number was :%d \n",num);
				printf("you won\n");
				break;
					}		//this block will loop 3 times ensuring only 3 chances are given to the user for guessing, if user's guess is not matched to the num 
			else if (x!=num){
				printf("Try Again\n");
				//printf("Enter the number again : ");
				//scanf("%d",&x);
				goto Check;
			if (x>10){
			printf("Try numbers 10 or lessthen 10 \n");
			//scanf("%d",&x);
			goto Check;
			}//this block is responsible for not taking values above the threshold value in this case it is 10
			
				}	
					}


		}
	 }
	if (chance>=3)
	printf("The Number Was :%d\nPlay Again \n",num);//this section prints the random number generated by srand if user reaches thershold no.of attempts 
		break;
}	


	


return 0;
}

```

## Sumofeven

```c
//Program for sumofeven.c
#include<stdio.h>

int main()
{
	int num1,num2,sum=0;
	printf("Enter the numbers :");
	scanf("%d%d",&num1,&num2);
	for(int i=num1;i<=num2;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}

	}
	printf("the sum of numbers b/w %d - %d  even numbers is :%d\n",num1,num2,sum);
return 0;
}

```

## Lcm

```c
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

```

## Lcf

```c
//Program for lcf.c
#include<stdio.h>

int main(){
	int num1,num2,max,min,lcf=1;
	printf("Enter the 2 numbers :");
	scanf("%d %d",&num1,&num2);
	if(num1<num2){
		min=num1;
		max=num2;
	}
	else{
		min=num2;
		max=num1;

	}
	
	for (int i=max;i>=min;i--){
		if (i==2){
			break;

		}
		
		if(num1%i==0 && num2%i==0){
				lcf=i;

			}

		}
	printf("%d\n",lcf);
	
return 0;
}

```

## Sumofoddnum

```c
//Program for sumofoddnum.c
#include<stdio.h>

int main()
{
	int num,sum=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{	if(i%2!=0)
		{
			sum+=i;
		}
	}
printf("sum of %d odd numbers :%d\n",num,sum);
}

```

## Armstrong

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

## Sumofprimenum

```c
//Program for sumofprimenum.c
#include<stdio.h>

int main()
{
	int sum=0;
	for(int i=2;i<=1000;i++)
	{	
		int flag=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
									
			}

		}
		if(flag)
			sum+=i;
		

	}
	printf("The sum of prime numbers form 1-1000 is :%d\n",sum+2);
return 0;
}

```

## Asciivalofchar

```c
//Program for asciivalofchar.c
#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the charcter :");
	scanf("%c",&ch);
	for(int i='a',j='A';i<='z',j<='Z';i++,j++)
	{
		printf(" %c ASCII value is :%d\t",i,i);
		printf(" %c ASCII value is :%d\n",j,j);
	}
	printf("%d\n",ch);
return 0;
}

```

## Colonloop

```c
//Program for colonloop.c
#include<stdio.h>

int main(){
	int num,i=0;
	scanf("%d",&num);
	for( ;i<num+1;i++);
	printf("%d",i );
return 0;
}

```

## Sumnaverage

```c
//Program for sumnaverage.c
#include<stdio.h>

int main()
{
	int num,sum=0,i=1;
	float avg;
	printf("Enter the number of numbers : ");
	scanf("%d",&num);

	while(i<=num)
	{
		if (num<0){
			printf("Enter the positive number \n");
			continue;
		}
	sum+=i;
	
	i++;	

	}
	avg=sum/num;
	printf("sum of n digits =%d Average of n digits =%.2f\n",sum,avg);
return 0;
}

```

## Table

```c
//Program for table.c
#include<stdio.h>

int main(){
	int TableNum,limit,res=1;
	printf("Enter the table number which you want :");
	scanf("%d",&TableNum);
	printf("Enter the limit of the table :");
	scanf("%d",&limit);
	for (int i=1;i<=limit;i++){
		res=TableNum*i;
		printf("%d x %d = %d\n",TableNum,i,res);
		
	}


return 0;
}

```

## Reverseastrung

```c
//Program for reverseastrung.c
#include<stdio.h>

int main(){
	int num,i=0,j;
	printf("Enter the num : ");
	scanf("%d",&num);
	j=num;
	for( ;i<=num,0<=j;i++,j--)
	{
		printf(" %d ",j);



	}


return 0;
}

```

## Diffbwdates

```c
//Program for diffbwdates.c
#include<stdio.h>

int main()

{
	int d1,d2,d,m1,m2,m,y1,y2,y;
	printf("Enetr the first year  : ");
	scanf("%d/%d/%d",&d1,&m1,&y2);
	printf("Enetr the second year  : ");
	scanf("%d/%d/%d",&d2,&m2,&y2);
	if (y2<y1)
	{
		y=y1-y2;

	}
	else
		y=y2-y1;
	if (d2<d1){
		
		if (m2==3){

			if (y2%100!=0 && y2%400==0 || y2%4==0)
			{
				d2=d2+29;
			}			
			else if (y2%100==0 && y2%400!=0 || y2%4!=0)
			{ 	 
					d2=d2+28;
			}
			else if (m2==4 || m2==6 || m2==9 || m2==11){
				d2=d2+31;

			}
			else{
				d2=d2+30;

			}
			m2=m2-1;

		}
		
	}
	if (m2<m1){
		m2=m2+12;
		y2=y2-1;

	}
	//y=y2-y1;
	m=m2-m1;
	d=d2-d1;
	printf("%d/%d/%d\n",d,m,y);
	printf("days=%d months=%d years=%d\n",d,m,y);



return 0;
}

```

