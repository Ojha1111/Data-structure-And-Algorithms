#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i;
clrscr();
printf("Plz enter the elements of the array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
printf("\nPlz enter the element you want to insert on the last of the array\n");
scanf("%d",&a[5]);
for(i=0;i<=5;i++)
{
printf("%d\n",a[i]);
}
getch();
}
