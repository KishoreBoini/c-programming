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
