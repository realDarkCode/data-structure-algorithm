#include <stdio.h>
#include <stdlib.h>

extern struct Node
{
    int data;
    struct Node *next;
} test;

extern struct Node *assignValue(struct Node *node, int data, struct Node *nextNode)
{
    node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = nextNode;
    return node;
}