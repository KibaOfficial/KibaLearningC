#include <stdio.h>

int main(void)
{
    // initial values
    float value1;
    double value2;
    signed int value3;
    unsigned int value4;

    // user input
    printf("Please enter a float value: ");
    scanf("%f", &value1);
    printf("Please enter a double value: ");
    scanf("%lf", &value2);
    printf("Please enter a signed int value: ");
    scanf("%d", &value3);
    printf("Please enter a unsigned int value: ");
    scanf("%u", &value4);
    
    // output
    printf("Float value: %f\n", value1);
    printf("Double value: %lf\n", value2);
    printf("Signed int value: %d\n", value3);
    printf("Unsigned int value: %u\n", value4);
    return 0;
}