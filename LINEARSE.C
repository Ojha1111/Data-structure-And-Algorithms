#include<stdio.h>
#include<conio.h>
void main()
{
int pos,i,a[100],x,n,flag=0;
clrscr();
printf("Plz enter the size of the array\n");
scanf("%d",&x);
printf("Plz enter the elements of the array\n");
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
printf("Plz enter the element you want to search inside the array");
scanf("%d",&n);
for(i=0;i<x;i++)
{
if(a[i]==n)
{
flag=1;
pos=i+1;
}
}
if(flag==1)
{
printf("The item found in the %d position",pos);
}
else
{
printf("The item is not found");
}
getch();
}