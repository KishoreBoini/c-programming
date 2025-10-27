## Hallowsquare

```c
//Program for hallowsquare.c
#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num;j++)
		{
			if(i==1||i==num||j==1||j==num)
			{
				printf("*");

			}
			else
				printf(" ");
			
		}
		printf("\n");

	}

return 0;
}

```

## Invertri

```c
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

```

## Numpat

```c
//Program for numpat.c
#include<stdio.h>


int main(){
int numl;
//int num=1;
printf("Enter the no.of loops : ");
scanf("%d",&numl);
for(int i=0;i<numl;i++){
	int num=1;
	for(int j=0;j<i+1;j++){
	printf("%d ",num);
	printf("* ");
	num+=1;
	}
printf("\n");

}
return 0;
 }


```

## Pattern

```c
//Program for pattern.c
#include<stdio.h>

int main(){
	int row,column;
	printf("Enter the rows and columns : ");
	scanf("%d%d",&row,&column);
	//square pattern
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	//right angled triangle
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(j<=i)
			{
			printf("* ");
			}
		}
		printf("\n");
	}
	//reverse right angled triangle
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(j>=i)
			{
			printf("* ");
			}
		}
		printf("\n");
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(j<i)
			{
				printf("  ");
			}
		}
		for(int j=0;j<column;j++)
		{
			if(j>=i)
			{
				printf("* ");
			}

		}
		printf("\n");
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(j<=column-i-1)
			{
				printf("* ");
			}
		}
		for(int j=0;j<column;j++)
		{
			if(j>column-i+column)
			{
				printf(" ");
			}
		}
		printf("\n");
	}

return 0;
}

```

