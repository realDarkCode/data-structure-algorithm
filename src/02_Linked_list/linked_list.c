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
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Insertion:
// Case 1: Insert at first
extern struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}