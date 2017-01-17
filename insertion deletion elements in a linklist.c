#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
Int data;
Struct node *next;
}*head,*var,*trav;
Void insert at beginning (int value)
{
Var=(struct node *)malloc(size of (struct node));
Var->data=value;
If(head==NULL)
{
Head=var;
Head->next=NULL;
}
Else
{
Var->next=head;
Head=var;
}
}
Void insert at end(int value)
{
struct node *temp;
temp=head;
Var=(struct node *)malloc(size of (struct node));
Var->data=value;
If(head==NULL)
{
Head=var;
Head->next=NULL;
}
Else
{
While(temp->next!=NULL)
{
Temp=temp->next;
}
Var->next=NULL;
Temp->next=var;
}
}
Void insert at middle(int value, int loc)
{
struct node *var2,*temp;
Var=(struct node *)malloc(size of (struct node));
Var->data=value;
Temp=head;
If(head==NULL)
{
Head=var;
Head->next=NULL;
}
Else
{
While(temp->data!=loc)
{	
Temp=temp->next;
}
var2=temp->next;
Temp->next=var;
Var->next=var2;
}
}
Int delete from middle(int value)
{
Struct node *temp,*var;
Temp=head;
While(temp!=NULL)
{
If(temp->data == value)
{
If(temp==head)
{
Head=temp->next;
Free(temp);
return0;
}
Else
{
Var->next=temp->next;
Free(temp);
return0;
}
}
Else
{
Var=temp;
Temp=temp->next;
}
}
Printf("data deleted from list is %d",value);
}
Int delete from end()
{
struct node *temp;
Temp=head;
While(temp->next != NULL)
{
Var=temp;
Temp=temp->next;
}
If(temp ==head)
{
Head=temp->next;
Free(temp);
return0;
}
Printf("data deleted from list is %d",temp->data);
Var->next=NULL;
Free(temp);
return0;
}
Void display()
{
trav=head;
If(trav==NULL)
{
Printf("\nlist is Empty");
}
Else
{
Printf("\nElements in the List: ");
While(trav!=NULL)
{
Printf(" -> %d ",trav->data);
Trav=trav->next;
}
Printf("\n");
}
}
Int main()
{
Int I=0;
head=NULL;
Printf("insertion at beginning of linked list - 1");
Printf("\ninsertion at the end of linked list - 2");
Printf("\ninsertion at the middle where you want - 3");
Printf("\ndeletion from the end of linked list - 4");
Printf("\ndeletion of the data that you want - 5");
Printf("\nexit - 6\n");
While(1)
{
printf("\nenter the choice of operation to perform on linked list");
Scanf("%d",&i);
Switch(I)
{
case1:
{
Int value;
Printf("\nenter the value to be inserted");
Scanf("%d",&value);
Insert at beginning(value);
Display();
Break;
}
case2:
{
Int value;
Printf("\nenter value to be inserted");
Scanf("%d",&value);
Insert at end(value);
Display();
Break;
}
case3:
{
Int value,loc;
Printf("\nafter which data you want to insert the data");
Scanf("%d",&loc);
printf("\nenter the value to be inserted");
scanf("%d",&value);
Insert at middle(value,loc);
display();
break;
}
case4:
{
Delete from end();
Display();
break;
}
case5:
{
Int value;
Display();
Printf("\n enter the data that you want to delete from the list shown above");
Scanf("%d",&value);
Delete from middle(value);
Display ();
Break;
}
case6:
{
Exit(0);
}
}
}
Getch();
}
