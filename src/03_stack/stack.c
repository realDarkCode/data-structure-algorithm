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