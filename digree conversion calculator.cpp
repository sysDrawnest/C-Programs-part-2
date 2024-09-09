#include<stdio.h>
#include<conio.h>
int main()
{
	float cel,kel,fah;
	int choice;
	printf("which convertion u want to do:\n");
	printf("1.for celsius to fahrenheit\n");
	printf("2.for fahrenheit to celsius\n");
	printf("3.for celsius to kelvin\n");
	printf("4.for kelvin to celsius\n");
	printf("5.for fahrenheit to kelvin\n");
	printf("6.for kelvin to fahrenheit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf(" Enter the celsius: ");
			scanf("%f",&cel);
			fah=((cel*9)/5)+32;
			printf(" %f deg.fahrenheit",fah);
			break;
		case 2:
			printf(" Enter the fahrenheit: ");
			scanf("%f",&fah);
			cel=((fah-32)*5)/9;
			printf(" %f deg.celsius",cel);
			break;
		case 3:
			printf(" Enter the celsius: ");
			scanf("%f",&cel);
			kel=cel+273.15;
			printf(" %f deg.kelvin",kel);
			break;
		case 4:
			printf(" Enter the kelvin: ");
			scanf("%f",&kel);
			cel=kel-273.15;
			printf(" %f deg.celsius",cel);
			break;
		case 5:
			printf(" Enter the fahrenheit: ");
			scanf("%f",&fah);
			kel=((fah+459.15)*5)/9;
			printf(" %f deg.kelvin",kel);
			break;
		case 6:
			printf(" Enter the kelvin: ");
			scanf("%f",&kel);
			fah=(((kel-273.15)*9)/5)+32;
			printf(" %f deg.fahrenheit",fah);
			break;
	}
	getch();
}
