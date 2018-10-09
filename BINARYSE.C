#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,x,n,p=1,q,mid;
clrscr();
printf("Plz enter the size of the array");
scanf("%d",&x);
printf("Plz enter the elements of the array in an assending order");
for(i=1;i<=x;i++)
{
scanf("%d",&a[i]);
}
printf("Plz enter the element you want to search inside the array");
scanf("%d",&n);
q=x;
while(p<=q)
{
mid=(p+q)/2;
if(a[mid]==n)
{
printf("The item has been found inside the array on %d position",mid);
break;
}
else if(a[mid]<n)
{
p=mid+1;
}
else
{
q=mid-1;
}
}
if(p>q)
{
printf("Sorry the item is not found");
}
getch();
}