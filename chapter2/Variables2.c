#include <stdio.h>

int main(void) {

    // Character (char)
    // Single character
    // The difference between char and string is that
    // char can store a single character, while a string can store multiple characters
    char letter = 'a'; // Single character in single quotes
    printf("char: %c\n", letter);


    // Integer (int)
    // Declaration
    int my_age;

    // Assignment
    my_age = -20;
    printf("signed int: %d\n", my_age);

    // Unsigned Integer (unsigned int)
    // The difference between signed and unsigned is that
    // signed int can be positive (+) or negative (-),
    // while unsigned int is only positive
    unsigned int my_age2 = 20U;
    printf("unsigned int: %u\n", my_age2);

    // Floating Point Number (float)
    // Float (32bit / 4 Bytes)
    float my_balance1 = 1750.45F;
    printf("float: %f\n", my_balance1);

    // Double Precision Floating Point Number (double)
    // Double (64bit / 8 Bytes)
    double my_balance2 = 1750.782364876324852653284;
    printf("double: %lf\n", my_balance2);

    return 0;
}
