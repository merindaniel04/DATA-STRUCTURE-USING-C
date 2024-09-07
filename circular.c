#include<stdio.h>
void Enqueue();
void Dequeue();
void Display();
int front=-1,rear=-1,m,n,item,i;
int a[100];
void main()
  {
    printf("enter the size of the queue");
    scanf("%d",&m);
    printf(" 1. Enqueue operation\n");
    printf(" 2. Dequeue operation\n");
    printf(" 3.  Display operation\n");
    printf(" 4.  exit operation\n");
  while(n!=4)
  {
    printf("enter the choice");
    scanf("%d",&n);
    switch(n)
     {
       case 1 : Enqueue();
                break;
       case 2 : Dequeue();
                break;
case 3 : Display();
         break;
case 4 : printf("exited the program");
         break;
}
}
}
void Enqueue()
{
  if(front==(rear+1)%m)
   {
    printf("OVERFLOW\n");
   }
  else if(front==-1 && rear==-1)
   {
     front++;
     rear++;
     printf("enter the element\n");
     scanf("%d",&a[rear]);
   }
   else
   {
   rear=(rear+1)%m;
   printf("enter the element\n");
     scanf("%d",&a[rear]);
   }
   
}
void Dequeue()
  {
    if(front==-1 && rear==-1)
    {
      printf("UNDERFLOW\n");
    }
    else if(front==rear)
     {
      item=a[front];
      rear=-1;
      front=-1;
      printf("deleted element is %d\n",item);
     }
   else
   {
   item=a[front];
   front=(front+1)%m;
   printf("deleted element is %d\n",item);
   }}
   void Display()
   {
    if(front==-1 && rear==-1) 
    {
     printf("the queue is empty\n");
    }
    else
    
    for(i=front;i<=rear;i++)
    {
     printf("%d\t",a[i]);
    }} 
  
    


         
         
         
         
