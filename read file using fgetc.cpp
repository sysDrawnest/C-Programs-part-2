#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("experiment.txt","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
