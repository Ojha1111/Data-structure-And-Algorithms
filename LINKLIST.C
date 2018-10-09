#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
}*start=NULL,*temp;
void insbeg(int item)
{
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
p->data=item;
p->link=NULL;
if(start==NULL)
{
start=p;
}
else
{
temp=start;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=p;
}
}
void display()
{
temp=start;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->link;
}
}
void main()
{
int n,i,item;
clrscr();
printf("Plz enter the number of element you want to insert inside the link list\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("plz enter the element you want to enter inside the link list");
scanf("%d",&item);
insbeg(item);
}
display();
getch();
}