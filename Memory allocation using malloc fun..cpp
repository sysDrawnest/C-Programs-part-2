#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,*ptr,n,sum=0;
	printf("How many element u want to enter?:\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("sorry memory cant be located\n");
		exit(0);
	}
	printf("Enter the %d elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("Sum of element is: %d  ",sum);
	free(ptr);
	getch();
}
