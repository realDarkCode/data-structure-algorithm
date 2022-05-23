#include <stdio.h>
#include <stdlib.h>

extern struct Node
{
    int data;
    struct Node *next;
} test;

extern void assignValue(struct Node *ptr, int data, struct Node *nextPtr)
{

    ptr->data = data;
    ptr->next = nextPtr;
}
extern void traverseLinkedList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}