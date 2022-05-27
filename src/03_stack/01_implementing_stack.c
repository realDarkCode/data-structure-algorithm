#include "stack.c"

int main()
{
    struct STACK *s = (struct STACK *)malloc(sizeof(struct STACK));
    createStack(s, 20);
}