#include <stdio.h>

int main(void)
{
    float value1 = 10;
    int value2 = 4;

    // To ensure the result includes the fractional part,
    // one of the variables (value1) is explicitly cast to float before division.
    float value3 = (float)value1 / value2;
    printf("%f\n", value3);

    return 0;
}