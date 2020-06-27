#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
struct node *top = 0;

void push(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
    printf("Data Pushed is : %d\n",newnode->data);
}
void display()
{
    struct node *temp;
    temp = top;
    if(top == 0)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        while (temp!=0)
        {
            printf("%d -> ",temp->data);
            temp = temp->next;
        }
        
    }
    
}

void peek()
{
    if(top == 0)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("\nTop Element is : %d\n",top->data);
    }
    
}

void pop()
{
    struct node *temp;
    temp = top;
    if(top == 0)
    printf("UnderFlow");
    else
    {
        printf("The Popped Element is : %d\n",temp->data);
        top = top->next;
        free(temp);
    }
    
}

int main()
{
    push(2);
    push(3);
    display();
    peek();
    pop();
    display();
}
