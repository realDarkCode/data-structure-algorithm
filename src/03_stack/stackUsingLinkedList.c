#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// check if the top most element has any value
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
// try to create another node to check if there is any available space in heap
int isFull()
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

void push(struct node *top, int value)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Stack Overflow")
    }
    else
    {
        n->data = value;
        n->next = top;
        top = n;
    }
}

int pop(struct node *top)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        int topValue = top->data;
        top = top->next;
        return topValue;
        free(n);
    }
}