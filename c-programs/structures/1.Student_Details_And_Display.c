#include<stdio.h>
#include<string.h>

struct student {
	char name[10];
	int age ;
	float marks ;
};

void Display_student(struct student s)
{
	
	printf("Name = %s\n",s . name);
	printf("Age = %d\n",s . age);
	printf("Marks = %.3f\n",s . marks);
}

int main()
{
	struct student stu;
	strcpy(stu . name,"Kishore");
	stu . age = 22;
	stu . marks = 77.83;
	Display_student(stu);
}
