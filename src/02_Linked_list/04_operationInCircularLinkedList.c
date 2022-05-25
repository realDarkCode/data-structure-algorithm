#include "./circularLinkedList.c"

int main()
{
    struct Node *head, *second, *third, *fourth, *fifth;
    head = assignValue(head, 11, second);
    second = assignValue(second, 22, third);
    third = assignValue(third, 33, fourth);
    fourth = assignValue(fourth, 44, fifth);
    fifth = assignValue(fifth, 55, head);

    return 0;
}