//Program for invertri.c
#include<stdio.h>

int main(){
int numl;
int num=1;
printf("Enter the no.of loops : ");
scanf("%d",&numl);
for (int i=0;i<numl;i++){
	for(int j=0;j<i;j++){
		printf(" ");	
	}

	for(int j=0;j<numl-i;j++){
		printf("%d",num);
		num+=1;
		//printf("*");
	}
printf("\n");
}
return 0;
}
