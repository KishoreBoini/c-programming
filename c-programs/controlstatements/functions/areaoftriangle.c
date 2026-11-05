//Program for areaoftriangle.c
#include<stdio.h>

float AreaofTriangle() ;

int main(){
	float tri,a,b,c;
	printf("Enter the three sides of triangle  : ");
	scanf("%f%f%f",&a,&b,&c);
	tri=AreaofTriangle(a,b,c);
	if (a<b+c && b<a+c && c<b+a)
	{
		printf("%f",tri);
	}
	else
		printf("not a triangle\n");

return 0;
}
float AreaofTriangle(int a,int b,int c)
{
	float area,s;
	s=(a+b+c)/2;
	area = s*((s-a)*(s-b)*(s-c));
return area;
}
