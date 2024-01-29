#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t age1 = 28;
    uint8_t age2 = 56;

    // 1.
    uint8_t older_age1;

    if (age1 > age2)
    {
        older_age1 = age1;
    }
    else
    {
        older_age1 = age2;
    }

    // 2. Ternary Expression
    //                   BOOL EXPR   ? True : False
    uint8_t older_age2 = age1 > age2 ? age1 : age2;

    return 0;
}