#include "linked_list.c"

int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    assignValue(head, 44, second);
    assignValue(second, 50, NULL);
    traverseLinkedList(head);
    return 0;
}