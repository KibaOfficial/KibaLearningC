#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t age_jan = 28;
    uint8_t mod = 3;

    if ((age_jan % mod) == 0)
    {
        printf("Jan's age is div. by %d\n", mod);
    }
    else 
    {
        printf("Jan's age is not div. by %d\n", mod);
    }
    return 0;
}