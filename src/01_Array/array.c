#include <stdio.h>
#include <stdlib.h>

extern struct array
{
    int total_size;    // boundary limit for add/insert of an element
    int used_size;     // used to traverse/set/get value in a array
    int *base_address; // used to locate the first element of an array
} test;
// set base values to created struct
extern int createArray(struct array *arr, int tSize, int uSize)
{
    if (uSize > tSize)
    {
        printf("error: used value can't be bigger than array size");
        return -1;
    }

    (*arr).total_size = tSize;
    // same as arr->total_size = tSize
    (*arr).used_size = uSize;
    (*arr).base_address = (int *)malloc(tSize * sizeof(int));
    return 0;
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

// setting default values to our custom array
extern void fillArray(struct array *arr)
{
    for (size_t i = 0; i < arr->used_size; i++)
    {
        (arr->base_address)[i] = i + 1;
    }
}
// insertion in array
extern int insertElement(struct array *arr, int element, int index)
{
    if (arr->used_size >= arr->total_size)
    {
        printf("error: The array is already full\n");
        return -1;
    }
    if (index > arr->used_size)
    {
        printf("error: invalid index\n");
        return -1;
    }
    for (int i = arr->used_size - 1; i >= index; i--)
    {
        (arr->base_address)[i + 1] = (arr->base_address)[i];
    }
    (arr->base_address)[index] = element;
    arr->used_size++;
    return 0;
}