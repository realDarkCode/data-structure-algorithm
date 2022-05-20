// Implementing Array as Abstract Data type in c Language
#include <stdio.h>
#include <stdlib.h>
// Declaring abstract array data type
struct customArray
{
    int total_size;    // boundary limit for add/insert of an element
    int used_size;     // used to traverse/set/get value in a array
    int *base_address; // used to locate the first element of an array
};
// set base values to created struct
void createArray(struct customArray *arr, int tSize, int uSize)
{
    (*arr).total_size = tSize;
    // same as arr->total_size = tSize
    (*arr).used_size = uSize;
    (*arr).base_address = (int *)malloc(tSize * sizeof(int));
}
// traversing our custom array
void traverseArray(struct customArray *arr)
{
    for (size_t i = 0; i < arr->used_size; i++)
    {
        printf("value at element %d is %d\n", i + 1, (arr->base_address)[i]);
    }
}
// set custom array value for used_value
void setValueArray(struct customArray *arr)
{
    for (size_t i = 0; i < arr->used_size; i++)
    {
        printf("enter value of element %d:\n", i + 1);
        scanf("%d", &(arr->base_address)[i]);
    }
}
int main()
{
    // declaring our custom ADT
    struct customArray marks;
    // initializing out custom ADT
    createArray(&marks, 10, 2);
    setValueArray(&marks);
    traverseArray(&marks);
    return 0;
}