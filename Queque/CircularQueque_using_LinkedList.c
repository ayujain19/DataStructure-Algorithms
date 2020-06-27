#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
struct node *front = 0;
struct node *rear = 0;

void enqueque(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if(rear == 0)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
    
    

}

void dequeque()
{
    struct node *temp;
    temp = front;
    if(front == 0)
    printf("Underflow");
    else if(front == rear)
    {
        front = rear = 0;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
        printf("\n");
    }
}

void display()
{
    struct node *temp;
    temp = front;
    if((front == 0) && (rear == 0))
    printf("Underflow");
    else
    {
        while (temp->next != front)
        {
            printf("%d -> ",temp->data);
            temp = temp->next;
        }
        printf("%d -> ",temp->data);
        
    }
    
}

int main()
{
    enqueque(5);
    enqueque(2);
    
    display();
    enqueque(-1);
    dequeque();
    display();
    return 0;
}