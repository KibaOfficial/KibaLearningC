#include <stdio.h>

int main(void)
{
    char c = 0x4b;
    char gunther[] = {0x4b, 0x49, 0x42, 0x41, '\0'};
    printf("char: %c\n", c);
    printf("string: %s\n", gunther);
    return 0;
}