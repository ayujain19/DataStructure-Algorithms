#include<stdio.h>
#include<stdlib.h>

#define N 5

int S1[N], S2[N];
int top1=-1, top2 = -1;
int count = 0;

void push1(int data)
{
    if(top1 == N-1)
    printf("Overflow");
    else
    {
        top1++;
        S1[top1] = data;
    }  
}
int pop1()
{
    return S1[top1--];
}

void push2(int data)
{
    if(top2 == N-1)
    printf("Overflow");
    else
    {
        top2++;
        S2[top2] = data;
    }  
}
int pop2()
{
    return S2[top2--];
}
void enqueque(int x)
{
    push1(x);
    count++;
}

void dequeque()
{
    int i, a, b;
    if((top1 == -1) && (top2 == -1))
    printf("Underflow");
    else
    {
        for(i=0;i<count;i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("\nThe Dequequed Elements is : %d",b);
        count--;
        for(i=0;i<count;i++)
        {
            a = pop2();
            push1(a);
        }
    }
    
}

void display()
{
    printf("\nThe Elements in Queque are  : ");
    for(int i=0;i<=top1;i++)
    {
        printf("%d ",S1[i]);
    }
}

int main()
{   
    enqueque(5);
    enqueque(2);
    enqueque(-1);
    display();
    dequeque();
    enqueque(4);
    display();

    return 0;
}