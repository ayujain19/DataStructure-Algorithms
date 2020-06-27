#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void main()
{
    struct node
    {
        int num;
        struct node *ptr;
    };
    typedef struct node NODE;

    NODE *head, *last, *temp=0, *temp2=0;
    int count = 0;
    int choice = 1;
    last =0;
    int location = 0;
    int flag = 0;
    int data;




    //...................................................................To add the data at the last

    while (choice==1)
    {
        temp = (NODE *)malloc(sizeof(NODE));
        printf("Enter the Data : ");
        scanf("%d",&temp->num);
        if(last==0)
        {
            last=head=temp;
        }
        else
        {
            last->ptr=temp;
            last=temp;
        }
        printf("For continue , Press 1 : ");
        scanf("%d",&choice);   
    }
    //Fo printing all the nodes 
    last->ptr = 0;
    temp = head;//Head never be move so we store it into temp
    while (temp!=0)
    {
        printf("%d -> ",temp->num);
        count++;
        temp=temp->ptr;
    }
    printf("\n");
    printf("Number of nodes in a list : %d\n",count);
    




    //............................................................ // To add the data at the beginning

    // printf("For Inserting at Beginning, Press 1 : ");
    // scanf("%d",&choice); 
    // while (choice==1)
    // {
    //     temp = (NODE *)malloc(sizeof(NODE));
    //     printf("Enter the Data : ");
    //     scanf("%d",&temp->num);
        
    //     temp->ptr = head;
    //     head = temp;

    //     printf("For continue , Press 1 : ");
    //     scanf("%d",&choice);   
    // }
    // //Fo printing all the nodes 
    // temp = head;
    // count = 0;
    // while (temp!=0)
    // {
    //     printf("%d -> ",temp->num);
    //     count++;
    //     temp=temp->ptr;
    // }
    // printf("\n");
    // printf("Number of nodes in a list : %d",count);





    //........................................................To Add data at any position 

    // printf("Enter Location after which u want to add a node : ");
    // scanf("%d",&location);
    // temp = (NODE *)malloc(sizeof(NODE));
    // printf("Enter the Data : ");
    // scanf("%d",&temp->num);

    // temp2 = head;
    // while(location-1>0)
    // {
    //     location--;
    //     temp2 = temp2->ptr;
    // }
    // temp->ptr = temp2->ptr;
    // temp2->ptr = temp;

    // temp = head;
    // while (temp!=0)
    // {
    //     printf("%d -> ",temp->num);
    //     temp = temp->ptr;
    // }
    




    //....................................................Search the data is present or not

    // temp = head;
    // printf("Enter data you want to search : ");
    // scanf("%d",&data);
    // while (temp!= 0)
    // {
    //     if(temp->num == data)
    //     {
    //         printf("Element Found");
    //         flag = 1;
    //         break;
    //     }
    //     else
    //     {
    //         temp = temp->ptr;
    //     }
    // }
    // if(flag==0)
    // printf("Element Not Found");
    




    //....................................................Delete a Node............................

    temp = head;
    printf("Enter data you want to search and delete (Compulsory that at least 3 node is present in linkedlist) : ");
    scanf("%d",&data);
    while (temp!= 0)
    {
        if(temp->ptr->num == data)
        {
            printf("Element Found");
            flag = 1;
            break;
        }
        else
        {
            temp = temp->ptr;
            temp2 = temp->ptr;
        }
    }
    if(flag==0)
    printf("Element Not Found");
    else
    {
        temp->ptr = temp->ptr->ptr;
        free(temp2);
    }
    temp = head;
    while (temp!=0)
    {
        printf("%d -> ",temp->num);
        temp=temp->ptr;
    }
}