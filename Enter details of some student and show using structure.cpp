#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
};//stu[100];

int main()
{
	int i,choice;
	struct student stu[50];
	printf("Enter how many student's data you want to enter:\n");
	scanf("%d",&choice);
	for(i=0;i<choice;i++)
	{
		printf("Enter Name, Roll_no and Marks of  Student %d :\n",i+1);
		scanf("%s %d %f",stu[i].name,&stu[i].rollno,&stu[i].marks);
	}
	printf("\nThe Name, Roll_no and Marks of %d Students are: \n\n",choice);
	for(i=0;i<choice;i++)
	{
		
		printf("%s\t%d\t%f\n",stu[i].name,stu[i].rollno,stu[i].marks);
	}
	getch();
}
