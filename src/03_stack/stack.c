#include <stdio.h>
#include <stdlib.h>

extern struct STACK
{
    int size;
    int top;
    int *arr;
} s;

extern void createStack(struct STACK *st, int size)
{

    st->size = size;
    st->top = -1;
    st->arr = (int *)malloc(sizeof(int) * st->size);
}

extern int isEmpty(struct STACK *sPtr)
{
    if (sPtr->top == -1)
    {
        return 1;
    }
    return 0;
}

extern int isFull(struct STACK *sPtr)
{
    if (sPtr->top >= sPtr->size - 1)
    {
        return 1;
    }
    return 0;
}

extern void checkEmptyStatus(struct STACK *sPtr)
{
    if (isEmpty(sPtr))
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }
}
extern void checkFullStatus(struct STACK *sPtr)
{
    if (isFull(sPtr))
    {
        printf("The stack is full\n");
    }
    else
    {
        printf("The stack is not full\n");
    }
}

// Pushing new elements to Stack
extern int push(struct STACK *sp, int value)
{
    if (isFull(sp))
    {
        printf("Stack Overflow\n");
        return -1;
    }
    sp->arr[sp->top++] = value;
    return 0;
}