#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 9;
    uint8_t b = 2;
    
    uint8_t d = a / b;
    uint8_t r = a - (d * b);

    printf("a mod b = %d\n", r);
    printf("a mod b = %d\n", a % b);
    return 0;
}