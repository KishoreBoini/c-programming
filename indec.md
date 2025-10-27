## Dec

```c
//Program for dec.c
#include<stdio.h>
int main(){
int i,j,z,y;
i=3;
j=7;
i--;//post decrement
--j;//pre decrement
printf("%d\n%d",i,j);
z=i--;//output 2
y=--j;//output 5
printf("\n%d\n%d",z,y);
return 0;
}



```

## Inc

```c
//Program for inc.c
#include<stdio.h>
int main(){
int i,j,z,y;
i=5;
j=16;
i++;//post increment
printf("%d\n",i);
++j;//Preincrement
printf("%d\n",j);
y=i++;//output 6
z=++j;//output 18
printf("%d\n%d",z,y);
return 0;
}

```

## Interinc2

```c
//Program for interinc2.c
#include<stdio.h>
int main(){
int i=12;
printf("%d%d%d%d",i++,++i,++i,i++);
}

```

## Interinc

```c
//Program for interinc.c
#include<stdio.h>
int main(){
int a=25;
printf("increment\n");
printf("%d\n",a++);
printf("%d\n",a);
printf("%d\n",++a);
printf("%d\n",++a);
printf("%d\n",a);
printf("%d\n",a++);
printf("%d\n",a);
printf("decrement\n");
printf("%d\n",a--);
printf("%d\n",a);
printf("%d\n",--a);
printf("%d\n",--a);
printf("%d\n",a);
printf("%d\n",a--);
printf("%d\n",a);

return 0;


}

```

