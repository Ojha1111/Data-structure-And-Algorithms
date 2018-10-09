#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],c[200],i,j,k,p,q;
clrscr();
printf("Plz enter the extent of the 1st array");
scanf("%d",&p);
printf("Plz enter the elemets of the 1st array");
for(i=0;i<p;i++)
{
scanf("%d",&a[i]);
}
printf("Plz enter the extent of the 2nd array");
scanf("%d",&q);
printf("Plz enter the elemets of the 2nd array");
for(i=0;i<q;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
k=0;
while((i<p)&&(j<q))
{
if(a[i]<=b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
while(i<p)
{
c[k]=a[i];
i++;
k++;
}
while(j<q)
{
c[k]=b[j];
j++;
k++;
}
for(k=0;k<p+q;k++)
{
printf("%d\n",c[k]);
}
getch();
}