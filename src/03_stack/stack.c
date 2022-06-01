#include <stdio.h>
#include <stdlib.h>
// Stack base structure
extern struct STACK
{
    int size;
    int top;
    int *arr;
} s;
// create a stack using stack pointer and given size
extern void createStack(struct STACK *st, int size)
{

    st->size = size;
    st->top = -1;
    st->arr = (int *)malloc(sizeof(int) * st->size);
}
// check if the stack is empty or not
extern int isEmpty(struct STACK *sPtr)
{
    if (sPtr->top == -1)
    {
        return 1;
    }
    return 0;
}
// check if the stack is full or not

extern int isFull(struct STACK *sPtr)
{
    if (sPtr->top >= sPtr->size - 1)
    {
        return 1;
    }
    return 0;
}
// print out all elements in a stack
extern void traverseStack(struct STACK *st)
{
    if (isEmpty(st))
    {
        printf("Stack-> empty, can't traverse\n");
    }
    else
    {
        for (size_t i = 0; i <= st->top; i++)
        {
            printf("%d ", st->arr[i]);
        }
        printf("\n");
    }
}

// print stack empty status
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
// print stack full status

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
extern void push(struct STACK *sp, int value)
{
    if (isFull(sp))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = value;
    }
}

// pop the last element in stack and return it

extern int pop(struct STACK *sp)
{
    if (isEmpty(sp))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int value = sp->arr[sp->top];
        sp->top--;
        return value;
    }
}

// peak operation: to get any value at stack in given index

extern int peak(struct STACK *sp, int index)
{
    int peakIndex = (sp->top - index) + 1;
    if (peakIndex < 0 || peakIndex > sp->top)
    {
        printf("Not a valid postion to peak\n");
        return -1;
    }
    return sp->arr[peakIndex];
}

// Fill stack with even numbers
extern void fillsWithEven(struct STACK *sp)
{
    for (int i = 0; i < sp->size; i++)
    {
        push(sp, i * 2);
    }
}