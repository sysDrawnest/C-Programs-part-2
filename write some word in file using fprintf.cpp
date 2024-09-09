#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	fp=fopen("experiment.txt","w");
	fprintf(fp,"hye sai ");
	fclose(fp);
}
