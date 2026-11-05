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
