#include <stdio.h>
#include "array.c"

int main()
{
    struct array student;
    createArray(&student, 10, 5);
    fillArray(&student);
    displayArray(&student);
    insertElement(&student, 33, 0);
    insertElement(&student, 99, 3);
    insertElement(&student, 100, 5);
    displayArray(&student);
    return 0;
    
}