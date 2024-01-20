// Copyright (c) 2024 KibaOfficial
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#include <stdint.h>
#include <stdio.h>

int main(void)
{
    // Unsigned Integer Types
    uint64_t a1 = 0;  // 64-bit unsigned integer
    uint32_t b1 = 0;  // 32-bit unsigned integer
    uint16_t c1 = 0;  // 16-bit unsigned integer
    uint8_t d1 = 0;   // 8-bit unsigned integer

    // Signed Integer Types
    int64_t a2 = 0;   // 64-bit signed integer
    int32_t b2 = 0;   // 32-bit signed integer
    int16_t c2 = 0;   // 16-bit signed integer
    int8_t d2 = 0;    // 8-bit signed integer

    printf("%llu\n", a1);
    printf("%lld\n", a2);

    printf("%u\n", b1);
    printf("%d\n", b2);

    printf("%hu\n", c1);
    printf("%hd\n", c2);

    printf("%hhu\n", d1);
    printf("%hhd\n", d2);

    return 0;
}
