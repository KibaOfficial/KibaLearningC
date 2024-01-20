#include <stdio.h>

int main(void)
{
    float value1 = 1750.30F;
    double value2 = 1750.30;
    signed int value3 = -1750;
    unsigned int value4 = 1750U;
    
    printf("float value: %f\n", value1);
    printf("double value: %lf\n", value2);
    printf("signed int value: %d\n", value3);
    printf("unsigned int value: %u\n", value4);
    return 0;
}