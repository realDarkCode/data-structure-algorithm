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