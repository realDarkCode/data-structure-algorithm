#include <stdio.h>
#include <stdlib.h>

extern struct Node
{
    int data;
    struct Node *next;
} test;

extern void assignValue(struct Node *node, int data, struct Node *nextNode)
{
    node->data = data;
    node->next = nextNode;
}

extern void traverseCircularLinkedList(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

extern struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}