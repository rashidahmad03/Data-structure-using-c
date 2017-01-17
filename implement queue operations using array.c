#include<stdio.h>
#include<conio.h>
#define MAX 10
Int queue[MAX],front=-1,rear=-1;
Void insert element();
Void delete element();
Void display queue();

Int main()
{
Int option;
Printf(">>> c program to implement queue operations <<<");
Do
{
Printf("\n\n 1.Insert an element");
Printf("\n 2.Delete an element");
Printf("\n 3.Display queue");
Printf("\n 4.Exit");
Printf("\n Enter your choice: ");
Scanf("%d",&option);
Switch(option)
{
case1:insert_element();
Break;
case2:delete_element();
Break;
case3:display_queue();
Break;
case4:return0;
}
}
While(option!=4);
}
Void insert element()
{
Int num;
Printf("\n Enter the number to be inserted: ");
Scanf("%d",&num);
If(front==0&& rear==MAX-1)
Printf("\n Queue Overflow Occurred");
Else if(front==-1&&rear==-1)
{
Front=rear=0;
Queue[rear]=num;

}
Elseif(rear==MAX-1&& front!=0)
{
Rear=0;
Queue[rear]=num;
}
Else
{
Rear++;
Queue[rear]=num;
}
}
Void delete element()
{
Int element;
If(front==-1)
{
Printf("\n Underflow");
}
Element=queue[front];
If(front==rear)
Front=rear=-1;
Else
{
If(front==MAX-1)
Front=0;
Else
Front++;
Printf("\n the deleted element is: %d",element);
}
}
Void display queue()
{
Int I;
If(front==-1)
Printf("\n No elements to display");
Else
{
Printf("\n the queue elements are:\n ");
For(I=front;i<=rear;i++)
{
Printf("\t %d",queue[I]);
}
}
}
