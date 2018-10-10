#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],j,i;
printf("plz enter the element of the array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=4,j=0;i>=0,j<5;i--,j++)
{
b[j]=a[i];
}
for(i=0;i<5;i++)
{
printf("%d",b[i]);
}
getch();
}
