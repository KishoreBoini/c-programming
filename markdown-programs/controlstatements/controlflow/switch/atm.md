# Atm

**C source:** `c-programs/controlstatements/controlflow/switch/atm.c`

## C Source Code

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
