#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,pos;
clrscr();
printf("Plz enter the elements of the array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("plz enter the position of the array which you want to delete\n");
scanf("%d",&pos);
for(i=pos;i<4;i++)
{
a[i]=a[i+1];
}
for(i=0;i<4;i++)
{
printf("%d",a[i]);
}
getch();
}