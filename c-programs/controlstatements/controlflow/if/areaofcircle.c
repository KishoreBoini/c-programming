//Program for areaofcircle.c
#include<stdio.h>

int main()
{
	float r,pi=3.14;
	printf("Enter the radius of the circle :");
	scanf("%f",&r);
	if(r<=0)
	{
		printf("invalid radius\n");
		return 0;
	}
	int rs;
	rs=r*r;
	printf("Area  :%.2f\n",pi*rs);
return 0;
}
