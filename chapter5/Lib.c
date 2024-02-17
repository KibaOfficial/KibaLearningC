#include <stdio.h>
#include "Lib.h"

int getNumberFromUser()
{
    int user_input;

    printf("Please enter an integer number: ");
    scanf("%d", &user_input);

    return user_input;
}