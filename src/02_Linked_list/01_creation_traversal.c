#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverseLinkedList(struct Node *head)
{
    struct Node *node = head;
    while (1)
    {
        printf("%d\n", node->data);
        if (node->next == NULL)
        {
            break;
        }
        node = node->next;
    }
}
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 6;
    head->next = second;
    second->data = 50;
    second->next = third;
    third->data = 40;
    third->next = NULL;

    // printf("First data %d\n", head->data);
    // printf("First node next value %d\n", head->next);
    // printf("Second data %d\n", second->data);
    // printf("Second node next value %d\n", second->next);
    // printf("Third data %d\n", third->data);
    // printf("Third node next value %d\n", third->next);
    traverseLinkedList(head);
    return 0;
}