#include "linked_list.c"

int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));

    assignValue(head, 44, second);
    assignValue(second, 55, third);
    assignValue(third, 66, fourth);
    assignValue(fourth, 77, fifth);
    assignValue(fifth, 88, NULL);

    printf("Linked List before insertion\n");
    traverseLinkedList(head);

    // head = insertAtFirst(head, 56);
    // insertAtIndex(head, 99, 2);
    // insertAtEnd(head, 11);
    insertAfter(second, 33);
    printf("Linked List after Insertion\n");
    traverseLinkedList(head);
    return 0;
}