#include <stdio.h>
#include "array.c"
int main()
{
    struct array arr;
    createArray(&arr, 20, 10);
    fillArray(&arr);
    displayArray(&arr);
    deleteElementAtIndex(&arr, 0);
    deleteElementAtIndex(&arr, 0);
    deleteElementAtIndex(&arr, 0);
    return 0;
}