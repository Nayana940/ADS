

	

//Program to implement queue operations using arrays.
#include<stdio.h>
void main()
{
	int q[100],n,rear=-1,front=-1,item,c,ch;
	printf("Enter n\n");
	scanf("%d",&n);
	do{
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\nEnter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:if(rear==n-1)
		printf("queue overflow\n");
	       else
	       {
	       if((rear==-1)&&(front==-1))
	       	front=rear=0;
	       else
	       	rear=rear+1;
	       printf("Enter element to insert\n");
	       scanf("%d",&item);
	       q[rear]=item;
	       printf("Element inserted\n");
	       }
	       break;
	case 2:if((front==-1)&&(rear==-1))
		printf("Queue underflow\n");
	       else
	       {
	        item=q[front];
	        printf("Deleted element:%d",item);
	       }
	       if(rear==front)
	        front=rear=1;
	       else
	        front=front+1;
	       break;
	case 3:printf("\nQueue:");
	       if((front==-1)&&(rear==-1))
	        printf("Queue underflow\n");
	       else
	       {
	       	for(int i=front;i<=rear;++i)
	        	printf("%d ",q[i]);
	       }
	       break;
	default:printf("input is not available\n");
	}
	printf("\nDo you want to execute more y-1/n-0");
	scanf("%d",&c);
	}while(c!=0);
	

}


