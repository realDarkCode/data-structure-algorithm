#include "./circularLinkedList.c"

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));

    assignValue(head, 11, second);
    assignValue(second, 22, third);
    assignValue(third, 33, fourth);
    assignValue(fourth, 44, fifth);
    assignValue(fifth, 55, head);

    traverseCircularLinkedList(head);
    return 0;
}