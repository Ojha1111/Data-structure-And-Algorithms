#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,x,pos;
clrscr();
printf("Plz enter the extent of the array");
scanf("%d",&x);
printf("Plz enter the elements of the array");
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
printf("Plz enter the position where you want to enter the element");
scanf("%d",&pos);
for(i=x-1;i>=pos;i--)
{
a[i+1]=a[i];
}
printf("Plz enter the element you want to enter inside the array");
scanf("%d",&n);
a[pos]=n;
for(i=0;i<=x;i++)
{
printf("%d",a[i]);
}
getch();
}