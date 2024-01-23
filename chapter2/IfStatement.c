#include <stdio.h>
#include <stdint.h>

int main(void) 
{
    uint8_t age_a = 28;
    uint8_t age_b = 42;

    if (age_a < age_b)
    {
        printf("A ist younger than B.\n");
    }
    else
    {
        printf("A is older than B.\n");
    }
    return 0;
}