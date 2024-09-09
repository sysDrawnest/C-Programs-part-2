#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
}stu1={"Happy",01,99.99},stu2;

int main()
{
	stu2=stu1;
	printf("students    name     rollno      marks\n\n");
	printf("student 1: %s\t%d\t%f\n",stu1.name,stu1.rollno,stu1.marks);
	printf("student 2: %s\t%d\t%f\n",stu2.name,stu2.rollno,stu2.marks);
	getch();
}
