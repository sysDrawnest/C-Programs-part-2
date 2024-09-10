#include<stdio.h>
#include<conio.h>
void sort(int a[],int no)
{
	int i,j,temp;
	for(j=0;j<no-1;j++)
		for(i=0;i<no-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	for(int i=0;i<no;i++)
	printf("%d\t",a[i]);
}
int main()
{
	int num,arr[20];
	printf("How many numbers you want to sort \n");
	scanf("%d", &num);
	for(int i=0;i<num;i++)
	{
		printf("Enter the no %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	sort(arr,num);
	/*for(int i=0;i<num;i++)
		printf("%d\t",arr[i]);*/
	getch();	
}
