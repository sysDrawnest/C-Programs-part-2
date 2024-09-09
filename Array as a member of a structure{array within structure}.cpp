#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
	float submarks[2];
}stuarr[2];

int main()
{
	int i,j;
	for(i=0;i<2;i++)
	{
		printf("Enter the details of student %d\n",i+1);
		printf("Enter the name ::");
		scanf("%s",stuarr[i].name);
		printf("Enter the roll no ::");
		scanf("%d",&stuarr[i].rollno);
		for(j=0;j<2;j++)
		{
			printf("Enter the marks of subject %d\n",j+1);
			scanf("%f",&stuarr[i].submarks[j]);
		}
	}
	for(i=0;i<2;i++)
	{
		printf("Details of studens %d is:\n",i+1);
		printf("Name=%s\tRollno.=%d\nmarks:\n",stuarr[i].name,stuarr[i].rollno);
		for(j=0;j<2;j++)
		{
			printf("Subject%d: ",j+1);
			printf("%f",stuarr[i].submarks[j]);
			printf("\n");
		}
	}
	getch();
}
