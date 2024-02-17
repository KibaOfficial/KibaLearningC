#include <stdio.h>
#include "Lib.h"

int getNumberFromUser()
{
    int number_from_user;
    printf("Please enter an integer number: ");
    scanf("%d", &number_from_user);
    return number_from_user;
}

int max(int number_a, int number_b)
{
    return (number_a > number_b) ? number_a : number_b;
}

int min(int number_a, int number_b)
{
    return (number_a < number_b) ? number_a : number_b;
}

float mean(int number_a, int number_b)
{
    return (float)(number_a + number_b) / 2.0;
}
