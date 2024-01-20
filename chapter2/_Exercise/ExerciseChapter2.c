// Copyright (c) 2024 KibaOfficial
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#include <stdint.h>
#include <stdio.h>

int main()
{
    uint64_t age;
    uint64_t days;
    uint64_t hours;
    uint64_t minutes;
    uint64_t seconds;

    printf("Enter your age in years: ");
    scanf("%llu", &age);

    days = age * 365ul;
    hours = days * 24ul;
    minutes = hours * 60ul;
    seconds = minutes * 60ul;
    
    
    printf("You are living since %llu days\n", days);
    printf("You are living since %llu hours\n", hours);
    printf("You are living since %llu minutes\n", minutes);
    printf("You are living since %llu seconds\n", seconds);


    return 0;
}
