# Numpat

**C source:** `c-programs/controlstatements/controlflow/loops/patterns/numpat.c`

## C Source Code

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
