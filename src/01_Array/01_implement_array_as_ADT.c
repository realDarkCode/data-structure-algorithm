#include <stdio.h>
// Our custom Array Data Structure
#include "array.c"

int main()
{
    // declaring our custom ADT
    struct array marks;
    // initializing out custom ADT
    createArray(&marks, 10, 2);
    inputValueArray(&marks);
    displayArray(&marks);
    return 0;
}