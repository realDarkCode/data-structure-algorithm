#include "stack.c"

int main()
{
    struct STACK *st = (struct STACK *)malloc(sizeof(struct STACK));
    createStack(st, 5);

    // printing stack element before using pop and push
    traverseStack(st);
    push(st, 5);
    push(st, 10);
    push(st, 15);
    push(st, 20);
    push(st, 25);
    pop(st);

    // printing stack element after push pop operations
    traverseStack(st);

    return 0;
}