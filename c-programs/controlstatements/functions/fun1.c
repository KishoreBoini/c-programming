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
