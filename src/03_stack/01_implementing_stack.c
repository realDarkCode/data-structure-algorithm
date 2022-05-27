#include "stack.c"

int main()
{
    struct Stack s;
    s.size = 20;
    s.top = 13;
    s.arr = (int *)malloc(s.size * sizeof(int));
    return 0;
}