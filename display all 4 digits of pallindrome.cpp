                      //display all 4 digits of pallindrome//
                      
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int rem,rev,num,temp;
	for(num=1000;num<=9999;num++)
	{
		rev=0;
		temp=num;
		while(temp>0)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(num==rev)
		{
			printf("%d\t",num);
		}
	}
	getch();
}
