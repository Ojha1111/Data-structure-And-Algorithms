#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,pos,x;
clrscr();
printf("Plz enter the size of the array\n");
scanf("%d",&n);
printf("Plz enter the elements of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Now plz enter the position you want to enter the element inside the array\n");
scanf("%d",&pos);
printf("Plz enter the element you want to insert inside the array\n");
scanf("%d",&x);
for(i=n;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=x;
for(i=0;i<n+1;i++)
{
printf("%d",a[i]);
}
getch();
}
