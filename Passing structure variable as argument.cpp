#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
	int marks;
};
void display(struct student);
int main()
{
	struct student stu1={"Happy",10,98};
	struct student stu2={"my-p",11,99};
	display(stu1);
	display(stu2);
	getch();
}
void display(struct student stu)
{
	printf("Name:: %s\n",stu.name);
	printf("Roll no.=%d\n",stu.rollno);
	printf("marks=%d\n",stu.marks);
	printf("\n");
}
