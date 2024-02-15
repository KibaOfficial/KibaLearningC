#include <stdio.h>
#include "Lib.h"

int divisibleBy2(int num);
int divisibleBy3(int num);
void printDivisibility(int num);
void printEvenOrOdd(int num);


int main(void)
{
    int n = getNumberFromUser();
    printDivisibility(n);
    return 0;
}

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