#include <stdio.h>
#include "Lib.h"
int divisibleBy2(int num)
{
    return num % 2 == 0;
}

int divisibleBy3(int num)
{
    return num % 3 == 0;
}

void printDivisibility(int num)
{
    if (divisibleBy2(num))
    {
        printf("%d is divisible by 2\n", num);
        return;
    }
    else if (divisibleBy3(num))
    {
        printf("%d is divisible by 3\n", num);
        return;
    }

    printf("%d is not divisible by 2 or 3\n", num);

}

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
    printDivisibility(n);
    return 0;
}