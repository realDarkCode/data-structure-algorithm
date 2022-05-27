#include "stack.c"

int main()
{
    struct STACK *s = (struct STACK *)malloc(sizeof(struct STACK));
    createStack(s, 2);

    checkEmptyStatus(s);

    // Pushing values manually
    s->arr[0] = 55;
    s->top++;
    s->arr[1] = 66;
    s->top++;

    checkFullStatus(s);
}