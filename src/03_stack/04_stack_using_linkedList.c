#include "stackUsingLinkedList.c"

int main(int argc, char const *argv[])
{
    struct Node *top = NULL;
    top = push(top, 5);
    top = push(top, 10);
    top = push(top, 15);
    linkedListTraversal(top);
    return 0;
}