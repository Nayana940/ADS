#include<stdio.h>
void main(){
int q[100],n,rear=-1,front=-1,item,c,ch;
printf("Enter n\n");
scanf("%d",&n);
do{
printf("\n 1.Enqueue\n2.Dequeue\n3.Display\nEnter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:if(rear==n-1)
printf("queue overflow\n");
else
{
if((rear==-1)&&front(front==-1))
front=rear=0;
else
rear=rear+1;
printf("enter the element to instert\n");
scanf("%d",&item);
q[rear]=item;
printf("Element inserted\n");
}
break;
case 2:if((front==-1)&&(rear==-1)))
printf("queue underflow\n");
else
{
item=q[front];
printf("Deleted element:%d",item);
}
if(rear==front)
front()
