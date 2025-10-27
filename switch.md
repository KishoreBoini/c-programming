## Matchingcase

```c
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

```

## Atm

```c
//Program for atm.c
#include<stdio.h>

int main(){
	int Amount,notes,choice,total;
	printf("Enter the Amount : ");
	scanf("%d",&Amount);
	printf("Enter your choice of notes : ");
	printf("500,200,100,50 : ");
	scanf("%d",&choice);

	switch(choice){
		case 500 :notes=Amount/500;
			 printf("%d 500 notes  \n",notes);
			 Amount%=500;
			 printf("%d\n", total=500*notes);

		case 200 :notes=Amount/200;
			  printf("%d 200 Notes  \n",notes);
			  Amount%=200;
			 printf("%d\n", total=200*notes);

		case 100 :notes=Amount/100;
			  printf("%d 100 Notes  \n",notes);
			 Amount%=100;
			 printf("%d\n", total=100*notes);

		case 50 :notes=Amount/50;
			  printf("%d 50 Notes  \n",notes);
			 Amount%=50;
			 printf("%d\n", total=50*notes);
		
		case 20 :notes=Amount/20;
			  printf("%d 20 Notes  \n",notes);
			 Amount%=20;
			 printf("%d\n", total=20*notes);

		case 10 :notes=Amount/10;
			  printf("%d 10 Notes  \n",notes);
			 Amount%=10;
			 printf("%d\n", total=10*notes);

	}
return 0;
}

```

## Days

```c
//Program for days.c
#include<stdio.h>

int main(){

	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	switch(num)
	{
	case 1:printf("monday\n");
	       break;
	case 2:printf("tuesday\n");
	       break;
	case 3:printf("wednesday\n");
	       break;
	case 4:printf("thursday\n");
	       break;
	case 5:printf("friday\n");
	       break;
	case 6:printf("saturday\n");
	       break;
	case 7:printf("sunday\n");
	       break;
	default:
	       printf("Invalid input \n");
	}

return 0;
}

```

