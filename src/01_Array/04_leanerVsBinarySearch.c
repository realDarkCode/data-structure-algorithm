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
int binarySearch(int arr[], int arrSize, int element)
{
    int low = 0, high = arrSize, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int numbers[] = {20, 30, 45, 50, 70, 84, 90, 50, 54, 69, 42, 25, 60, 44, 55};
    int size = sizeof(numbers) / sizeof(int), element = 55;

    int linearSearchResult = linearSearch(numbers, size, element);
    printf("Element found at index: %d\n", linearSearchResult);

    int sortedNumber[] = {5, 10, 15, 20, 25, 30};
    int nSize = sizeof(sortedNumber) / sizeof(int), searchElement = 15;
    int binarySearchResult = binarySearch(sortedNumber, nSize, searchElement);
    printf("Element found at index: %d\n", binarySearchResult);

    return 0;
}