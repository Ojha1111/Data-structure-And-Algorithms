#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,n,temp;
clrscr();
printf("Plz enter the extent of the array\n");
scanf("%d",&n);
printf("Plz enter the elements of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}
