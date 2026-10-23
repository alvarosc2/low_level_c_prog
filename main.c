#include <stdio.h>
#include "base_aritmethic.h"

#define SIZE 33

int main()
{
    unsigned int value = 123;

    char result[SIZE] = "";
    displayBits(value, result, SIZE);

    printf("%d en biniario es: %s\n", value, result);
    return 0;
}