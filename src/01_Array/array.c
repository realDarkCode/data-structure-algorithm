#include <stdio.h>
#include <stdlib.h>

extern struct array
{
    int total_size;    // boundary limit for add/insert of an element
    int used_size;     // used to traverse/set/get value in a array
    int *base_address; // used to locate the first element of an array
} test;
// set base values to created struct
extern void createArray(struct array *arr, int tSize, int uSize)
{
    (*arr).total_size = tSize;
    // same as arr->total_size = tSize
    (*arr).used_size = uSize;
    (*arr).base_address = (int *)malloc(tSize * sizeof(int));
}
// traversing our custom array
extern void displayArray(struct array *arr)
{
    for (size_t i = 0; i < arr->used_size; i++)
    {
        printf("%d", (arr->base_address)[i]);
        if (i < arr->used_size - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}
// set custom array value for used_value
extern void inputValueArray(struct array *arr)
{
    for (size_t i = 0; i < arr->used_size; i++)
    {
        printf("enter value of element %d:\n", i + 1);
        scanf("%d", &(arr->base_address)[i]);
    }
}