//Program for alphabetornot?.c
#include<stdio.h>
int main(){
char a;
printf("Enter the charcter :");
scanf("%c",&a);
a>='a'&&a<='z'||a>='A'&&a<='Z'?printf("alphabet\n"):printf("not alphabet\n");
return 0;
}
