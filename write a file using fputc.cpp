#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE *fp;
	int i;
	char a[100];
	fp=fopen("experiment.txt","w");
	if(fp==NULL)
	{
		printf("file cant be open");
		//exit();
	}
	printf("Enter a string\n");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		fputc(a[i],fp);
	}
	fclose(fp);
	getch();
}
