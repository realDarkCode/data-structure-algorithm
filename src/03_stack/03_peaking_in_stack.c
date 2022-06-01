#include "stack.c"

int main()
{
    struct STACK *st = (struct STACK *)malloc(sizeof(struct STACK));

    createStack(st, 10);
    fillsWithEven(st);

    traverseStack(st);
    printf("peak value at %d is %d\n", 3, peak(st, 3));
    printf("peak value at %d is %d\n", 7, peak(st, 7));
    printf("peak value at %d is %d\n", 10, peak(st, 10));
    printf("peak value at %d is %d\n", 11, peak(st, 11));

    printf("StackTop value %d\n", stackTop(st));
    printf("StackBottom value %d\n", stackBottom(st));
}