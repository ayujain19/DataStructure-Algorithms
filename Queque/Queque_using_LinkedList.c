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
    if((front==0) && (rear==0))
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    } 
}

void dequeque()
{
    struct node *temp;
    temp = front;
    if((front == 0) && (rear == 0))
    printf("Queque is Empty\n");
    else
    {
        printf("\nThe  Dequeque Element is %d\n",front->data);
        front = front->next;
        free(temp);
    }
    
}

void display()
{
    struct node *temp;
    if((front == 0) && (rear == 0))
    printf("Queque is Empty\n");
    else
    {
        temp = front;
        while (temp!=0)
        {
            printf("%d -> ",temp->data);
            temp = temp->next;
        }
        
    }
    
}

int main()
{
    enqueque(5);
    enqueque(0);
    enqueque(-3);
    display();
    dequeque();
    display();

    return 0;
}
