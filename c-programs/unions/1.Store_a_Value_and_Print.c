#include<stdio.h>

union value {
	int val;
	float fval;
};

void Display_Value()
{
	union value v;
	printf("Enter the integer number : ");
	scanf("%d",&v . val);
	printf("Enter the float number : ");
	scanf("%f",&v . fval);

	printf("Integer value = %d",v .  val);
	printf("float value = %.3f",v . fval);
}

int main()
{
	Display_Value();
}
