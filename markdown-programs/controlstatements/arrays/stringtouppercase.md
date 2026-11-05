# Stringtouppercase

**C source:** `c-programs/controlstatements/arrays/stringtouppercase.c`

## C Source Code

```c
//Program for stringtouppercase.c
#include<stdio.h>

int main(){
	char cval;
	char arr[10];
	printf("Enter the string :");
	scanf("%s",arr);
	int i=0;
	while(arr[i]!='\0'){
		cval=arr[i];
		switch(cval){
			case 'a':arr[i]='A';
				 break;
			case 'b':arr[i]='B';
				 break;
			case 'c':arr[i]='C';
				 break;
			case 'd':arr[i]='D';
				 break;
			case 'e':arr[i]='E';
				 break;
			case 'f':arr[i]='F';
				 break;
			case 'g':arr[i]='G';
				 break;
			case 'h':arr[i]='H';
				 break;
			case 'i':arr[i]='I';
				 break;
			case 'j':arr[i]='J';
				 break;
			case 'k':arr[i]='K';
				 break;
			case 'l':arr[i]='L';
				 break;
			case 'm':arr[i]='M';
				 break;
			case 'n':arr[i]='N';
				 break;
			case 'o':arr[i]='O';
				 break;
		        case 'p':arr[i]='P';
				 break;
			case 'q':arr[i]='Q';
				 break;
			case 'r':arr[i]='R';
				 break;
			case 's':arr[i]='S';
				 break;
			case 't':arr[i]='T';
				 break;
			case 'u':arr[i]='U';
				 break;
			case 'v':arr[i]='V';
				 break;
			case 'w':arr[i]='W';
				 break;
			case 'x':arr[i]='Y';
				 break;
			case 'y':arr[i]='X';
				 break;
			case 'z':arr[i]='Z';
				 break;
			default : printf("error\n");
	

		}
		i++;
		
		
	}
	
	printf("%s\n",arr);


return 0;
}
```
