// insertion in Array
#include <stdio.h>

void displayArray(int arr[], int arrSize)
{
    for (size_t i = 0; i < arrSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insertElement(int arr[], int totalSize, int usedSize, int element, int index)
{
    if (usedSize >= totalSize)
        return -1;
    if (index + 1 >= totalSize)
        return -1;
    for (size_t i = usedSize - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 0;
}
int main()
{
    int numbers[20] = {5, 7, 11, 13, 15, 52};
    int tSize = 20, uSize = 6, elementToInsert = 50, atIndex = 3;
    printf("before insertion\n");
    displayArray(numbers, uSize);
    insertElement(numbers, tSize, uSize, elementToInsert, atIndex);

    printf("after insertion\n");
    displayArray(numbers, uSize);

    return 0;
}