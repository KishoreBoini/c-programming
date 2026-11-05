//Program for matchingcase.c
#include<stdio.h>
int main(){
	int choice;
	printf("Enter the num : ");
	scanf("%d",&choice);
		switch(choice)
		{
		  case 1:printf("one\n");
			 break;
		  case 2:printf("two\n");
			 break;
		  case 3:printf("three\n");
			 break; 
		  default:
			 printf("Invalid Number\n");

		}


return 0;
}
