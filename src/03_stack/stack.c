#include <stdio.h>
#include <stdlib.h>

extern struct Stack
{
    int size;
    int top;
    int *arr;
} test;

extern void createStack(struct Stack *s, int size)
{
    s->size = size;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(int) * s->size);
}