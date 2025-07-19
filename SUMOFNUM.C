#include <stdio.h>
#include <conio.h>
void main()
{
	int numberone,numbertwo,sum=0;
	clrscr();
	printf("Enter the number\n");
	scanf("%d",&numberone);
	printf("Enter the Number\n ");
	scanf("%d",&numbertwo);
	sum=numberone+numbertwo;
	printf("%d",sum);
	getch();
}