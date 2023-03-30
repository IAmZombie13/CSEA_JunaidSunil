#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *link;
} *front = NULL, *rear = NULL;

struct stack
{
    int data;
    struct stack *link;
} *top = NULL, *head = NULL;

void insert()
{
    struct node *newnode = malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->value);
    newnode->link = NULL;

    if (front == NULL)
    {
        front = newnode;
        rear = newnode;
    }

    else
    {
        rear->link = newnode;
        rear = newnode;
    }
    printf("Element %d inserted into Queue\n\n", newnode->value);
}

void del()
{
    struct node *newnode;
    if (front == NULL && rear == NULL)
    {
        printf("No nodes in queue\n\n");
    }
    else
    {
        if (front == rear)
        {
            newnode = front;
            rear = front = NULL;
        }
        else
        {
            newnode = front;
            front = front->link;
        }
        printf("Element %d deleted from queue\n\n", newnode->value);
        free(newnode);
    }
}

void display()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nQueue is : \n");
        while (ptr != NULL)
        {
            printf("%d\t", ptr->value);
            ptr = ptr->link;
        }
    }
}

int pop()
{
    struct stack *newnode;

    if (head == top)
    {
        newnode = top;
        head = top = NULL;
    }
    else
    {
        newnode = head;
        while (newnode->link != top)
        {
            newnode = newnode->link;
        }
        top = newnode;
        newnode = newnode->link;
    }
    int x = newnode->data;
    free(newnode);
    return x;
}

void push(int x)
{
    struct stack *newnode = (struct stack *)malloc(sizeof(struct stack));
    newnode->data = x;
    newnode->link = NULL;

    if (top == NULL && head == NULL)
    {
        head = top = newnode;
    }
    else
    {
        top->link = newnode;
        top = newnode;
    }
}

void reverse()
{
    if (front == NULL && rear == NULL)
    {
        printf("\nQueue is empty to reverse\n\n");
    }
    else
    {
        struct node *a;

        a = front;
        while (a != NULL)
        {
            push(a->value);
            a = a->link;
        }

        a = front;
        while (a != NULL)
        {
            a->value = pop();
            a = a->link;
        }
        printf("\nQueue is reversed\n\n");
    }
}

int main()
{
    int ch;

    do
    {
        printf("\n1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Reverse\n");
        printf("4.Display\n");
        printf("5.Exit\n");

        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            reverse();
            break;
        case 4:
            display();
            break;
        default:
            return 0;
        }
    } while (1);
}
