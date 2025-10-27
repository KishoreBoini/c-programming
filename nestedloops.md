## Sumoflowermatrixtriangle

```c
//Program for sumoflowermatrixtriangle.c
#include<stdio.h>

int main(){
	int n;
	printf("Enter the no.of r/c of matrix :");
	scanf("%d",&n);
	int matrix[n][n],sum=0;
	printf("Enetr the matrix of your choice : ");
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		scanf("%d",&matrix[i][j]);

		}
	}
	//printf("%d",matrix[n][n]);
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i>=j)
			sum+=matrix[i][j];

		}	

	}
	printf("%d\n",sum);




return 0;
}

```

## 123

```c
//Program for 123.c
#include<stdio.h>

int main(){
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++)
			printf("i=%d j=%d\n",i,j);
		printf("\n");

	}
return 0;
}

```

## Palindrome

```c
//Program for palindrome.c
#include<stdio.h>

int main(){
	int num,act,hlp,pal=0;
	printf("Enter the num : ");
	scanf("%d",&num);
	act=num;
	for (int i=1;num>0;i++,num/=10){
		hlp=num%10;
		pal=(pal*10)+hlp;
		printf("%d iteration work= %d\n",i,pal);
	}
	if (pal==act){
		printf("%d is a palindrome\n",pal);

	}
	else{
		printf("%d is not a palindrome to %d\n",pal,act);

	}

return 0;
}

```

## Sumofuppermatrixtriangle

```c
//Program for sumofuppermatrixtriangle.c

#include<stdio.h>

int main(){
	int n;
	printf("Enter the no.of r/c of matrix :");
	scanf("%d",&n);
	int matrix[n][n],sum=0;
	printf("Enetr the matrix of your choice : ");
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		scanf("%d",&matrix[i][j]);

		}
	}
	//printf("%d",matrix[n][n]);
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i<=j)
			sum+=matrix[i][j];

		}	

	}
	printf("%d\n",sum);




return 0;
}

```

## Identitymatrixornot

```c
//Program for identitymatrixornot.c
#include<stdio.h>

int main(){
	int n,div;
	printf("Enter the no.of r/c of matrix :");
	scanf("%d",&n);
	int matrix[n][n],sum=0;
	printf("Enetr the matrix of your choice : ");
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		scanf("%d",&matrix[i][j]);

		}
	}

	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i=j){
				div=i;
			}
			div*10;

		}	

	}
	if (div==n,n,n)
	printf("identity\n");
	else
		printf("not identity\n");




return 0;
}


```

