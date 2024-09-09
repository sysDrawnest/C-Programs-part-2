#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
	int marks;
}stu{"Happy",01,99};
void display(char name[],int rollno,int marks);
int main()
{
	display(stu.name,stu.rollno,stu.marks);
	getch();
}
void display(char name[],int rollno,int marks)
{
	printf("Name=%s\nRollno=%d\nMarks=%d\n",name,rollno,marks);
}
