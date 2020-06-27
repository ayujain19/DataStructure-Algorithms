#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


int main()
{
    struct node
    {
        int num;
        struct node *pre;
        struct node *next;
    };
    typedef struct node NODE;

    NODE *head, *temp = 0, *last;
    last = 0;
    int choice = 1;

    while (choice == 1)
    {
        temp = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item : ");
        scanf("%d",&temp->num);

        if(last == 0)
        {
            temp->pre = 0;
            temp->next = 0;
            last = head = temp;
        }
    
        else
        {
            last->next = temp;
            temp->pre = last;
            last = temp;
            last->next = 0;    
        }

        printf("For continue, Press 1 else Any Key for Exit : ");
        scanf("%d",&choice);
    }

    temp = head;
    printf("Forward Traverse : ");
    while (temp != 0)
    {
        
        printf("%d -> ", temp->num);
        temp = temp->next;
    }

    temp = last;
    printf("\nBackward Traverse : ");
    while (temp != 0)
    {
        
        printf("%d -> ", temp->num);
        temp = temp->pre;
    }
    
    
        

 
    



    return 0;
}