#include <stdio.h>

int linearSearch(int arr[], int arrSize, int element)
{
    for (size_t i = 0; i < arrSize; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int numbers[] = {20, 30, 45, 50, 70, 84, 90, 50, 54, 69, 42, 25, 60, 44, 55};
    int size = sizeof(numbers) / sizeof(int), element = 55;

    int searchResult = linearSearch(numbers, size, element);
    printf("Element found at index: %d\n", searchResult);
    return 0;
}