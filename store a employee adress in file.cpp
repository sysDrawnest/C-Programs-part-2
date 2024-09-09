#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char name[50];
	int id;
	float salary;
	fp=fopen("experiment.txt","w");
	if(fp==NULL)
	{
		printf("file does not exits");
		//return;
	}
	printf("Enter the name of employee:\n");
	scanf("%s",name);
	fprintf(fp,"Name = %s\n",name);
	printf("Enter the id of employee:\n");
	scanf("%d",&id);
	fprintf(fp,"Id = %d\n",id);
	printf("Enter the salary of employee:\n");
	scanf("%f",&salary);
	fprintf(fp,"salary = %f\n",salary);
	fprintf(fp,"hye sai ");
	fclose(fp);
}
