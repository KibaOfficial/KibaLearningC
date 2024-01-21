// Copyright (c) 2024 KibaOfficial
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#include <stdint.h>
#include <stdio.h>

int main()
{
    uint32_t age;
    uint32_t days;
    uint32_t hours;
    uint32_t minutes;
    uint32_t seconds;

    printf("Enter your age in years: ");
    scanf("%lu", &age);

    days = age * 365ul;
    hours = days * 24ul;
    minutes = hours * 60ul;
    seconds = minutes * 60ul;
    
    
    printf("You are living since %lu days\n", days);
    printf("You are living since %lu hours\n", hours);
    printf("You are living since %lu minutes\n", minutes);
    printf("You are living since %lu seconds\n", seconds);


    return 0;
}
