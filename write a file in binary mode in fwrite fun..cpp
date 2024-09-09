#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
	int bookid;
	char title[20];
	float price;
};
int main()
{
	struct book hp;
	FILE *fp;
	char a[100];
	fp=fopen("experiment binary.txt","wb");
	printf("Enter the  bookid,  name  &  price of book\n");
	scanf("%d",&hp.bookid);
	//fflush(stdin);														//used to free the buffer
	gets(hp.title);
	scanf("%f",&hp.price);
	fwrite(&hp,sizeof(hp),1,fp);
	fclose(fp);
}
	 
