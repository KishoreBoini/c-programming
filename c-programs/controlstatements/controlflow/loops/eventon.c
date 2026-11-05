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
