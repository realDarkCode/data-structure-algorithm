#include "linked_list.c"

int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    assignValue(head, 44, second);
    assignValue(second, 55, third);
    assignValue(third, 66, fourth);
    assignValue(fourth, 77, NULL);
    traverseLinkedList(head);

    head = insertAtFirst(head, 56);
    traverseLinkedList(head);
    return 0;
}