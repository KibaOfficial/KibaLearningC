#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void)
{
    uint8_t a = 22;
    uint8_t b = 42;

    // boolean: true false
    bool comparison = false;

    // a greater than b
    comparison = a > b;
    printf("a > b = %d\n", comparison);

    // a less than b
    comparison = a < b;
    printf("a < b = %d\n", comparison);

    // a and b are equal
    comparison = a == b;
    printf("a == b = %d\n", comparison);

    // a and b are not equal
    comparison = a != b;
    printf("a != b = %d\n", comparison);

    // a greater or equal to b
    comparison = a >= b;
    printf("a >= b = %d\n", comparison);

    // a less or equal to b
    comparison = a <= b;
    printf("a <= b = %d\n", comparison);
    return 0;
}
