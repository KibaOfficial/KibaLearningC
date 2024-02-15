#include <stdio.h>
#include "Lib.h"

void printEvenOrOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is even!\n", num);
    }
    else
    {
        printf("%d is odd!\n", num);
    }
}

int main(void)
{
    int n = getNumberFromUser();
    printEvenOrOdd(n);

    // Ignore this shit xD
    //printEvenOrOdd(a); 
    //printf("%d\n", getNumberFromUser());

    return 0;
}