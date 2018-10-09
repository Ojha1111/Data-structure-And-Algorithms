#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
}*start=NULL,*temp,*old;



void insbeg(int item)
{
struct node *p;
p=(struct node*)malloc (sizeof(struct node));
p->data = item;
if(start==NULL)
{
start=p;
start->next=NULL;
}
else
{
p->next = start;
start=p;
}
}


void insend(int item)
{
struct node *p;
temp=start;
p=(struct node*)malloc(sizeof(struct node));
p->data=item;
if(start==NULL)
{
start=p;
start->next=NULL;
}
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=p;
p->next=NULL;
}
}

void insatreqpos(int item, int pos)
{
int i;
struct node *p;
temp=start;
p=(struct node*) malloc (sizeof(struct node));
p->data=item;
if(start == NULL)
{
start=p;
p->next=NULL;
}
else
{
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
p->next=temp->next;
temp->next=p;
}
}


void delbeg()
{
if(start==NULL)
{
printf("Underflow");
}
else
{
old=start;
start=start->next;
free(old);
}
}


void delend()
{
old=start;
temp=start;
if(start==NULL)
{
printf("Underflow");
}
else
{
while(old->next!=NULL)
{
temp=old;
old=old->next;
}
temp->next=NULL;
free(old);
}
}


void delatreqpos(int pos)
{
int i;
temp=start;
if(start==NULL)
{
printf("Underflow");
}
else
{
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
old=temp->next;
temp->next=old->next;
free(old);
}
}



void display()
{
temp=start;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}



void main()
{
int i,item,n,choice,pos;
clrscr();
printf("Plz enter the extent of the link list\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Plz enter the value of the item\n");
scanf("%d",&item);
insbeg(item);
}
label:
clrscr();
printf("Press 1 if you want to insert an item at the beg\nPress 2 if you want to insert at the end\nPress 3 if you want to insert inside the required postion\nPress 4 if you want to display the link list\nPress 5 if you want to delete from the link list\nPress 6 if you want to delete from the end\nPress 7 if you want to delete from the required position\nPress any other number to exit the program\n");
scanf("%d",&choice);
if(choice==1)
{
printf("Plz enter the value of the item\n");
scanf("%d",&item);
insbeg(item);
goto label;
}
else if(choice==2)
{
printf("Plz enter the value of the item\n");
scanf("%d",&item);
insend(item);
goto label;
}
else if(choice==3)
{
printf("Plz enter the value of the item\n");
scanf("%d",&item);
printf("Plz enter the postion you want to insert inside the link list\n");
scanf("%d",&pos);
insatreqpos(item,pos);
goto label;
}
else if(choice==4)
{
clrscr();
display();
printf("\n\nPress Enter to contine with the program");
getch();
goto label;
}
else if(choice==5)
{
delbeg();
goto label;
}
else if(choice==6)
{
delend();
goto label;
}
else if(choice==7)
{
printf("Plz enter the postion where you want to delete the node from the link list\n");
scanf("%d",&pos);
delatreqpos(pos);
goto label;
}
else
{
printf("BYE o_o HAVE A NICE DAY");
//printf("BYE\n");
//printf("\t\t\t\t O             O\n\n\t\t\t\t\t|\n\t\t\t\t\t|\n\t\t\t\t\t|\n\t\t\t\t\t|\n\t\t\t\t\t|");
//printf("\       /\n\     /\n\   /\n\ /\n|_|\n");
}
getch();
}