#include "stackUsingLinkedList.c"

int main(int argc, char const *argv[])
{
    struct Node *top = NULL;
    top = push(top, 5);
    top = push(top, 10);
    top = push(top, 15);
    top = push(top, 12);
    top = push(top, 18);

    linkedListTraversal(top);

    printf("%d is in position %d\n", peak(top, 3), 3);
    printf("stack Top: %d", stackTop(top));
    return 0;
}
