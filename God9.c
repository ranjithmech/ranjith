#include<stdio.h>
#include<conio.h>
void main()
{
int min,hr;
clrscr();
printf("enter the minute");
scanf("%d",&min);
hr=min/60;
min=min%60;
printf("%d\t%d",hr,min);
getch();
}
