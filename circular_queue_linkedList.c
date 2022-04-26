#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    int data;
};
struct node *rear = NULL, *front = NULL;

void enqueue(int data)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("Condition is overflow ");
    }
    else
    {
        new->data = data;
        if (rear == NULL)
        {
            rear = new;
            front = new;
            front = front->next;
        }
        else
        {
            rear->next = new;
            new->next = front;
            rear = new;
        }
    }
}

void dequeue()
{
    struct node *t;
    if (front == NULL)
    {
        printf("Empty sorry ");
    }
    else
    {
        if (rear == front)
        {
            printf("deleted data is %d ", front->data);
            front = NULL;
            rear = NULL;
        }

        else
        {
            t = front;
            front->next = front;
            rear->next = front;
            free(t);
        }
    }
}

void display()

{  
     struct node *t;
    if (front == NULL)
    {
        printf("Empty sorry ");
    }

    else 
    {
        do
        {
           printf("data is %d ",t->data);
           t=t->next;
        }

        while(t!=front);
        printf("\n");
    }
}

   int main()
   {
       int op,x;
       printf("1.enqueue\n 2.dequeue \n 3.diplay ");
       scanf("%d",&op);
       switch(op)
       {
           case 1:
           printf("enter element ");
           scanf("%d",&x);
           enqueue(x);
        
           break;

           
           case 2:
           dequeue();
           break;

           case 3:
           display();
           break;

           case 4:
           exit(0);

       }

       return 0;
   }